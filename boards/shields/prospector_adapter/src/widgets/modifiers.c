#include "modifiers.h" // Include the header file

#include <zmk/display.h>
#include <zmk/event_manager.h>
// #include <zmk/events/modifiers_state_changed.h> // No longer strictly needed
// for state getter
#include <zmk/events/keycode_state_changed.h> // Subscribe to this event instead
#include <zmk/hid.h>  // Needed for zmk_hid_get_explicit_mods()
#include <zmk/keys.h> // Definition for modifier flags (MOD_*)
// #include <zmk/endpoints.h> // No longer needed for the primary path

// Include fonts if you plan to use specific fonts or symbols
// #include <fonts.h>
// #include <sf_symbols.h>

#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

// List to hold all instances of this widget
static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

// Structure to hold the state (which modifiers are active)
struct modifier_indicator_state {
  zmk_mod_flags_t modifiers; // Use ZMK's modifier flags type
};

// Function to update the visual appearance of the widget (NO CHANGES HERE)
static void
modifier_indicator_update_label(lv_obj_t *label,
                                struct modifier_indicator_state state) {
  char text[6] = {0};
  int index = 0;

  if (state.modifiers & MOD_CONTROL) {
    text[index++] = 'C';
  }
  if (state.modifiers & MOD_SHIFT) {
    text[index++] = 'S';
  }
  if (state.modifiers & MOD_ALT) {
    text[index++] = 'A';
  }
  if (state.modifiers & MOD_GUI) {
    text[index++] = 'G';
  }

  if (index == 0) {
    text[index++] = '-';
  }
  text[index] = '\0';

  lv_label_set_text(label, text);

  if (state.modifiers != 0) {
    lv_obj_set_style_text_color(label, lv_color_hex(0xFFFFFF),
                                LV_PART_MAIN); // Active: White
  } else {
    lv_obj_set_style_text_color(label, lv_color_hex(0x606060),
                                LV_PART_MAIN); // Inactive: Gray
  }
}

// Callback function called when the modifier state changes (NO CHANGES HERE)
static void
modifier_indicator_update_cb(struct modifier_indicator_state state) {
  struct zmk_widget_modifier_indicator *widget;
  SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) {
    modifier_indicator_update_label(widget->obj, state);
  }
}

// *** MODIFIED STATE GETTER ***
// Function to get the modifier state - fetches directly, ignoring event data
static struct modifier_indicator_state
modifier_indicator_get_state(const zmk_event_t *eh) {
  // Ignore the event 'eh'
  // Fetch the current explicit modifiers directly from the HID system
  zmk_mod_flags_t current_mods = zmk_hid_get_explicit_mods();
  LOG_DBG("DISP | Fetched explicit mods: 0x%02X", current_mods);
  return (struct modifier_indicator_state){.modifiers = current_mods};
}

// Register the listener for the widget (NO CHANGES HERE)
ZMK_DISPLAY_WIDGET_LISTENER(widget_modifier_indicator,
                            struct modifier_indicator_state,
                            modifier_indicator_update_cb,
                            modifier_indicator_get_state)

// *** MODIFIED SUBSCRIPTION ***
// Subscribe the listener to the keycode state changed event
ZMK_SUBSCRIPTION(widget_modifier_indicator, zmk_keycode_state_changed);

// Initialization function for the modifier indicator widget (NO CHANGES HERE)
int zmk_widget_modifier_indicator_init(
    struct zmk_widget_modifier_indicator *widget, lv_obj_t *parent) {
  widget->obj = lv_label_create(parent);

  // Configure the label's appearance
  lv_label_set_text(widget->obj, "-"); // Initial text
  lv_obj_set_style_text_color(widget->obj, lv_color_hex(0x606060),
                              LV_PART_MAIN); // Initial color
  lv_obj_set_style_text_font(widget->obj, &lv_font_montserrat_14,
                             LV_PART_MAIN); // Example font
  lv_obj_set_style_text_align(widget->obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);

  sys_slist_append(&widgets, &widget->node);

  // Initialize the listener system for this widget type
  widget_modifier_indicator_init();
  return 0;
}

// Function to get the underlying LVGL object (NO CHANGES HERE)
lv_obj_t *zmk_widget_modifier_indicator_obj(
    struct zmk_widget_modifier_indicator *widget) {
  return widget->obj;
}
