/**
 * @file modifiers.c
 * @brief Widget to display keyboard modifier states (Shift, Ctrl, Opt, Cmd).
 */

#include "modifiers.h" // Include the corresponding header

#include <zmk/display.h>
#include <zmk/event_manager.h>
#include <zmk/events/modifiers_state_changed.h>
#include <zmk/keys.h> // Required for modifier definitions (MOD_LSFT, etc.)
// #include <zmk/types.h> // Required for zmk_mod_flags_t

#include <fonts.h>      // Assuming you have custom fonts defined here
#include <sf_symbols.h> // Assuming you have SF Symbols defined here

#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

// Define active and inactive colors (adjust as needed)
#define MODIFIER_ACTIVE_COLOR lv_color_hex(0xFFFFFF)   // White
#define MODIFIER_INACTIVE_COLOR lv_color_hex(0x404040) // Dark Gray

/* Static list to keep track of all modifier indicator widgets */
static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

/**
 * @brief Structure to hold the state of the modifiers.
 */
struct modifiers_state {
  zmk_mod_flags_t current_mods; // Bitmask of currently active modifiers
};

/**
 * @brief Updates the visual appearance of the modifier indicators based on
 * state.
 *
 * @param widget The modifier widget instance containing the labels.
 * @param state The current modifier state.
 */
static void modifiers_update_visuals(struct zmk_widget_modifiers *widget,
                                     struct modifiers_state state) {
  zmk_mod_flags_t mods = state.current_mods;

  // Update Shift indicator
  if (mods & (MOD_LSFT | MOD_RSFT)) {
    lv_obj_set_style_text_color(widget->shift_label, MODIFIER_ACTIVE_COLOR,
                                LV_PART_MAIN);
  } else {
    lv_obj_set_style_text_color(widget->shift_label, MODIFIER_INACTIVE_COLOR,
                                LV_PART_MAIN);
  }

  // Update Control indicator
  if (mods & (MOD_LCTL | MOD_RCTL)) {
    lv_obj_set_style_text_color(widget->ctrl_label, MODIFIER_ACTIVE_COLOR,
                                LV_PART_MAIN);
  } else {
    lv_obj_set_style_text_color(widget->ctrl_label, MODIFIER_INACTIVE_COLOR,
                                LV_PART_MAIN);
  }

  // Update Option (Alt) indicator
  if (mods & (MOD_LALT | MOD_RALT)) {
    lv_obj_set_style_text_color(widget->opt_label, MODIFIER_ACTIVE_COLOR,
                                LV_PART_MAIN);
  } else {
    lv_obj_set_style_text_color(widget->opt_label, MODIFIER_INACTIVE_COLOR,
                                LV_PART_MAIN);
  }

  // Update Command (Gui/Super) indicator
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
 * @brief Extracts the modifier state from a ZMK event.
 *
 * @param eh The event to process.
 * @return The current state of the modifiers.
 */
static struct modifiers_state modifiers_get_state(const zmk_event_t *eh) {
  const struct zmk_modifiers_state_changed *ev =
      as_zmk_modifiers_state_changed(eh);
  // Check if the event is valid before dereferencing
  if (ev == NULL) {
    LOG_WRN("DISP | Modifiers event is NULL");
    // Return a default state (no modifiers active) or handle error
    // appropriately
    return (struct modifiers_state){.current_mods = 0};
  }
  LOG_DBG("DISP | Modifiers State Changed: 0x%02X", ev->modifiers);
  return (struct modifiers_state){.current_mods = ev->modifiers};
}

/* Register the widget to listen for modifier state change events */
ZMK_DISPLAY_WIDGET_LISTENER(widget_modifiers, struct modifiers_state,
                            modifiers_update_cb, modifiers_get_state)
ZMK_SUBSCRIPTION(widget_modifiers, zmk_modifiers_state_changed);

/**
 * @brief Initializes a new modifier indicator widget.
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
  // Add some spacing between icons (adjust as needed)
  lv_obj_set_style_pad_column(widget->obj, 5, LV_PART_MAIN);

  // Choose font (adjust font and size as needed)
  const lv_font_t *mod_font = &SF_Compact_Text_Bold_16; // Example font

  // Create Shift label
  widget->shift_label = lv_label_create(widget->obj);
  lv_label_set_text(widget->shift_label,
                    SF_SYMBOL_SHIFT); // Use SF Symbol for Shift (⇧)
  lv_obj_set_style_text_font(widget->shift_label, mod_font, LV_PART_MAIN);
  lv_obj_set_style_text_color(widget->shift_label, MODIFIER_INACTIVE_COLOR,
                              LV_PART_MAIN);

  // Create Control label
  widget->ctrl_label = lv_label_create(widget->obj);
  lv_label_set_text(widget->ctrl_label,
                    SF_SYMBOL_CONTROL); // Use SF Symbol for Control (⌃)
  lv_obj_set_style_text_font(widget->ctrl_label, mod_font, LV_PART_MAIN);
  lv_obj_set_style_text_color(widget->ctrl_label, MODIFIER_INACTIVE_COLOR,
                              LV_PART_MAIN);

  // Create Option label
  widget->opt_label = lv_label_create(widget->obj);
  lv_label_set_text(widget->opt_label,
                    SF_SYMBOL_OPTION); // Use SF Symbol for Option (⌥)
  lv_obj_set_style_text_font(widget->opt_label, mod_font, LV_PART_MAIN);
  lv_obj_set_style_text_color(widget->opt_label, MODIFIER_INACTIVE_COLOR,
                              LV_PART_MAIN);

  // Create Command label
  widget->cmd_label = lv_label_create(widget->obj);
  lv_label_set_text(widget->cmd_label,
                    SF_SYMBOL_COMMAND); // Use SF Symbol for Command (⌘)
  lv_obj_set_style_text_font(widget->cmd_label, mod_font, LV_PART_MAIN);
  lv_obj_set_style_text_color(widget->cmd_label, MODIFIER_INACTIVE_COLOR,
                              LV_PART_MAIN);

  /* Add this widget to the list of modifier indicators */
  sys_slist_append(&widgets, &widget->node);

  /* Initialize the widget's event listener */
  widget_modifiers_init(); // This initializes the listener created by
                           // ZMK_DISPLAY_WIDGET_LISTENER

  // Update visuals once initially with current state (optional, depends on
  // system init order) struct zmk_widget_modifiers *container;
  // SYS_SLIST_FOR_EACH_CONTAINER(&widgets, container, node) {
  //    modifiers_update_visuals(container, modifiers_get_state(NULL)); // Might
  //    need a way to get initial state
  // }

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
