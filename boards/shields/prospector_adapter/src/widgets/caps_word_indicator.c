/**
 * @file caps_word_indicator.c
 * Widget that displays a visual indicator for the CAPS WORD state
 */

#include "caps_word_indicator.h"

#include <zmk/display.h>
#include <zmk/event_manager.h>
#include <zmk/events/caps_word_state_changed.h>

#include <fonts.h>
#include <sf_symbols.h>

#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

/* Static list to keep track of all caps word indicator widgets */
static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

/**
 * Structure to hold the state of the caps word indicator
 */
struct caps_word_indicator_state {
  bool active; /* Whether caps word mode is currently active */
};

/**
 * Updates the visual appearance of the caps word indicator based on its state
 * @param label The LVGL label object to update
 * @param state The current state of the caps word indicator
 */
static void
caps_word_indicator_set_active(lv_obj_t *label,
                               struct caps_word_indicator_state state) {
  if (state.active) {
    /* When active, set the indicator color to bright cyan */
    lv_obj_set_style_text_color(label, lv_color_hex(0x80e0a7), LV_PART_MAIN);
  } else {
    /* When inactive, set the indicator color to dark gray */
    lv_obj_set_style_text_color(label, lv_color_hex(0x202020), LV_PART_MAIN);
  }
}

/**
 * Callback function that updates all caps word indicator widgets
 * @param state The new state to apply to all indicators
 */
static void
caps_word_indicator_update_cb(struct caps_word_indicator_state state) {
  struct zmk_widget_caps_word_indicator *widget;
  /* Iterate through all registered widgets and update their state */
  SYS_SLIST_FOR_EACH_CONTAINER(&widgets, widget, node) {
    caps_word_indicator_set_active(widget->obj, state);
  }
}

/**
 * Extracts the caps word state from a ZMK event
 * @param eh The event to process
 * @return The current state of the caps word indicator
 */
static struct caps_word_indicator_state
caps_word_indicator_get_state(const zmk_event_t *eh) {
  const struct zmk_caps_word_state_changed *ev =
      as_zmk_caps_word_state_changed(eh);
  LOG_INF("DISP | Caps Word State Changed: %d", ev->active);
  return (struct caps_word_indicator_state){
      .active = ev->active,
  };
}

/* Register the widget to listen for caps word state change events */
ZMK_DISPLAY_WIDGET_LISTENER(widget_caps_word_indicator,
                            struct caps_word_indicator_state,
                            caps_word_indicator_update_cb,
                            caps_word_indicator_get_state)
ZMK_SUBSCRIPTION(widget_caps_word_indicator, zmk_caps_word_state_changed);

/**
 * Initializes a new caps word indicator widget
 * @param widget Pointer to the widget structure to initialize
 * @param parent The LVGL parent object to attach this widget to
 * @return 0 on success, negative error code otherwise
 */
int zmk_widget_caps_word_indicator_init(
    struct zmk_widget_caps_word_indicator *widget, lv_obj_t *parent) {
  /* Create a new LVGL label object */
  widget->obj = lv_label_create(parent);

  /* Set the label's text to the I-beam cursor symbol */
  lv_label_set_text(widget->obj, SF_SYMBOL_CHARACTER_CURSOR_IBEAM);
  /* Set initial color to dark gray */
  lv_obj_set_style_text_color(widget->obj, lv_color_hex(0x030303),
                              LV_PART_MAIN);
  /* Set the font to SF Compact Text Bold 32pt */
  lv_obj_set_style_text_font(widget->obj, &SF_Compact_Text_Bold_32,
                             LV_PART_MAIN);
  /* Center-align the text */
  lv_obj_set_style_text_align(widget->obj, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN);

  /* Add this widget to the list of caps word indicators */
  sys_slist_append(&widgets, &widget->node);

  /* Initialize the widget's event listener */
  widget_caps_word_indicator_init();
  return 0;
}

/**
 * Returns the LVGL object associated with this widget
 * @param widget Pointer to the widget structure
 * @return Pointer to the LVGL object
 */
lv_obj_t *zmk_widget_caps_word_indicator_obj(
    struct zmk_widget_caps_word_indicator *widget) {
  return widget->obj;
}
