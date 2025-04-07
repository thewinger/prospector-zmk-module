/**
 * @file modifiers.c
 * @brief Widget to display keyboard modifier symbols (Shift, Ctrl, Opt, Cmd)
 *        with color change on activation.
 */

#include "modifiers.h" // Include the corresponding header

#include <zmk/display.h> // Includes display status events now?
#include <zmk/event_manager.h>
// #include <zmk/events/display_status_changed.h>  // Original path - Not found in build
#include <zmk/events/modifiers_state_changed.h> // More efficient trigger
#include <zmk/hid.h>  // Required for zmk_hid_get_explicit_mods()
#include <zmk/keys.h> // Required for modifier definitions (MOD_LSFT, etc.)

// Make sure these includes provide the necessary symbol definitions and fonts
// If SF_SYMBOL_* or SF_Compact_Text_Bold_32 are defined elsewhere, ensure
// those headers are included directly or indirectly.
#include <fonts.h>
#include <sf_symbols.h>

#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

// Define active and inactive colors
#define MODIFIER_ACTIVE_COLOR lv_color_hex(0x80e0a7)   // Green
#define MODIFIER_INACTIVE_COLOR lv_color_hex(0x202020) // Dark Gray

/* Static list to keep track of all modifier indicator widgets */
static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

/**
 * @brief Structure to hold the state of the modifiers.
 */
struct modifiers_state {
  zmk_mod_flags_t current_mods; // Bitmask of currently active modifiers
};

/**
 * @brief Updates the visual appearance (color) of the modifier symbols based on
 * state.
 *
 * @param widget The modifier widget instance containing the labels.
 * @param state The current modifier state.
 */
static void modifiers_update_visuals(struct zmk_widget_modifiers *widget,
                                     struct modifiers_state state) {
  zmk_mod_flags_t mods = state.current_mods;

  // Update Shift symbol color
  if (mods & (MOD_LSFT | MOD_RSFT)) {
    lv_obj_set_style_text_color(widget->shift_label, MODIFIER_ACTIVE_COLOR,
                                LV_PART_MAIN);
  } else {
    lv_obj_set_style_text_color(widget->shift_label, MODIFIER_INACTIVE_COLOR,
                                LV_PART_MAIN);
  }

  // Update Control symbol color
  if (mods & (MOD_LCTL | MOD_RCTL)) {
    lv_obj_set_style_text_color(widget->ctrl_label, MODIFIER_ACTIVE_COLOR,
                                LV_PART_MAIN);
  } else {
    lv_obj_set_style_text_color(widget->ctrl_label, MODIFIER_INACTIVE_COLOR,
                                LV_PART_MAIN);
  }

  // Update Option (Alt) symbol color
  if (mods & (MOD_LALT | MOD_RALT)) {
    lv_obj_set_style_text_color(widget->opt_label, MODIFIER_ACTIVE_COLOR,
                                LV_PART_MAIN);
  } else {
    lv_obj_set_style_text_color(widget->opt_label, MODIFIER_INACTIVE_COLOR,
                                LV_PART_MAIN);
  }

  // Update Command (Gui/Super) symbol color
  if (mods & (MOD_LGUI | MOD_RGUI)) {
    lv_obj_set_style_text_color(widget->cmd_label, MODIFIER_ACTIVE_COLOR,
                                LV_PART_MAIN);
  } else {
    lv_obj_set_style_text_color(widget->cmd_label, MODIFIER_INACTIVE_COLOR,
                                LV_PART_MAIN);
  }
}

/**
 * @brief Callback function that updates all modifier indicator widgets.
 *
 * @param state The new modifier state to apply to all indicators.
 */
static void modifiers_update_cb(struct modifiers_state state) {
  struct zmk_widget_modifiers *widget;
  /* Iterate through all registered widgets and update their state */
  SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) {
    modifiers_update_visuals(widget, state);
  }
}

/**
 * @brief Fetches the current modifier state directly from the HID system.
 *        Triggered by keycode_state_changed event.
 *
 * @param eh The event pointer, expected to be zmk_modifiers_state_changed.
 * @return The modifier state extracted from the event.
 */
static struct modifiers_state
modifiers_get_state_from_event(const zmk_event_t *eh) {
  const struct zmk_modifiers_state_changed *ev =
      as_zmk_modifiers_state_changed(eh);
  // Use the modifier state directly from the event
  zmk_mod_flags_t current_mods = ev->modifiers;
  LOG_DBG("DISP | Modifiers state changed: 0x%02X", current_mods);
  return (struct modifiers_state){.current_mods = current_mods};
}

/* Register the widget listener for modifier changes */
ZMK_DISPLAY_WIDGET_LISTENER(widget_modifiers_sub, struct modifiers_state,
                            modifiers_update_cb, modifiers_get_state_from_event)
/* Subscribe the listener to modifier state changes */
ZMK_SUBSCRIPTION(widget_modifiers_sub, zmk_modifiers_state_changed);

// Function to fetch the current state directly (used for refresh)
static struct modifiers_state modifiers_get_current_state() {
  zmk_mod_flags_t current_mods = zmk_hid_get_explicit_mods();
  LOG_DBG("DISP | Fetched current explicit mods for refresh: 0x%02X",
          current_mods);
  return (struct modifiers_state){.current_mods = current_mods};
}

// Listener function for display status changes
static int display_status_listener(const zmk_event_t *eh) {
  const struct zmk_display_status_changed *ev =
      as_zmk_display_status_changed(eh);
  if (ev && ev->status == ZMK_DISPLAY_EVENT_RESUMED) {
    LOG_DBG("DISP | Display resumed, refreshing modifiers widget");
    // Fetch the current state and update the visuals
    modifiers_update_cb(modifiers_get_current_state());
  }
  return ZMK_EV_EVENT_BUBBLE; // Allow other listeners to process
}

// Register the display status listener
ZMK_LISTENER(widget_modifiers_display_status, display_status_listener)
// Subscribe to display status changes
ZMK_SUBSCRIPTION(widget_modifiers_display_status, zmk_display_status_changed);

/**
 * @brief Initializes a new modifier indicator widget (Symbol version).
 *
 * @param widget Pointer to the widget structure to initialize.
 * @param parent The LVGL parent object to attach this widget to.
 * @return 0 on success, negative error code otherwise.
 */
int zmk_widget_modifiers_init(struct zmk_widget_modifiers *widget,
                              lv_obj_t *parent) {
  /* Create a container object for the row layout */
  widget->obj = lv_obj_create(parent);
  lv_obj_remove_style_all(widget->obj); // Remove default container styling
  lv_obj_set_size(widget->obj, LV_SIZE_CONTENT,
                  LV_SIZE_CONTENT); // Size to content

  // Use Flexbox for horizontal layout
  lv_obj_set_layout(widget->obj, LV_LAYOUT_FLEX);
  lv_obj_set_flex_flow(widget->obj, LV_FLEX_FLOW_ROW);
  // Add some spacing between icons (adjust value as needed)
  lv_obj_set_style_pad_column(widget->obj, 5, LV_PART_MAIN); // 5px gap

  // --- Use the Font and Symbols you specified ---
  // Ensure this font includes the SF Symbols you need, or include a separate
  // symbol font
  const lv_font_t *mod_font = &SF_Compact_Text_Semibold_32;

  // Create Shift label
  widget->shift_label = lv_label_create(widget->obj);
  // Ensure SF_SYMBOL_SHIFT is defined (e.g., in sf_symbols.h or similar)
  // It should be a string like "\xEF\x87\xA7" for U+F1E7 or similar UTF-8
  // sequence
  lv_label_set_text(widget->shift_label, SF_SYMBOL_SHIFT);
  lv_obj_set_style_text_font(widget->shift_label, mod_font, LV_PART_MAIN);
  lv_obj_set_style_text_color(widget->shift_label, MODIFIER_INACTIVE_COLOR,
                              LV_PART_MAIN);

  // Create Control label
  widget->ctrl_label = lv_label_create(widget->obj);
  // Ensure SF_SYMBOL_CONTROL is defined
  lv_label_set_text(widget->ctrl_label, SF_SYMBOL_CONTROL);
  lv_obj_set_style_text_font(widget->ctrl_label, mod_font, LV_PART_MAIN);
  lv_obj_set_style_text_color(widget->ctrl_label, MODIFIER_INACTIVE_COLOR,
                              LV_PART_MAIN);

  // Create Option label
  widget->opt_label = lv_label_create(widget->obj);
  // Ensure SF_SYMBOL_OPTION is defined
  lv_label_set_text(widget->opt_label, SF_SYMBOL_OPTION);
  lv_obj_set_style_text_font(widget->opt_label, mod_font, LV_PART_MAIN);
  lv_obj_set_style_text_color(widget->opt_label, MODIFIER_INACTIVE_COLOR,
                              LV_PART_MAIN);

  // Create Command label
  widget->cmd_label = lv_label_create(widget->obj);
  // Ensure SF_SYMBOL_COMMAND is defined
  lv_label_set_text(widget->cmd_label, SF_SYMBOL_COMMAND);
  lv_obj_set_style_text_font(widget->cmd_label, mod_font, LV_PART_MAIN);
  lv_obj_set_style_text_color(widget->cmd_label, MODIFIER_INACTIVE_COLOR,
                              LV_PART_MAIN);

  /* Add this widget to the list of modifier indicators */
  sys_slist_append(&widgets, &widget->node);

  /* Initialize the main widget listener (for modifier changes) */
  // The ZMK_DISPLAY_WIDGET_LISTENER macro handles its own initialization.
  // No explicit init call needed here for widget_modifiers_sub.

  // Trigger an initial update to set the correct colors based on startup
  // modifier state by fetching the current state directly.
  modifiers_update_cb(modifiers_get_current_state());

  return 0;
}

/**
 * @brief Returns the LVGL container object associated with this widget.
 *
 * @param widget Pointer to the widget structure.
 * @return Pointer to the LVGL container object.
 */
lv_obj_t *zmk_widget_modifiers_obj(struct zmk_widget_modifiers *widget) {
  return widget->obj;
}
