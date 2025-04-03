// modifiers.h
#pragma once

#include <lvgl.h>
#include <zephyr/kernel.h>

/**
 * @brief Structure for the Modifiers widget.
 */
struct zmk_widget_modifiers {
  sys_snode_t node;      // Node for the linked list
  lv_obj_t *obj;         // Main LVGL container object for the widget
  lv_obj_t *shift_label; // Label for Shift
  lv_obj_t *ctrl_label;  // Label for Control
  lv_obj_t *opt_label;   // Label for Option (Alt)
  lv_obj_t *cmd_label;   // Label for Command (Gui)
};

/**
 * @brief Initialize the Modifiers widget.
 *
 * @param widget Pointer to the widget structure to initialize.
 * @param parent The LVGL parent object for this widget.
 * @return 0 on success, negative error code otherwise.
 */
int zmk_widget_modifiers_init(struct zmk_widget_modifiers *widget,
                              lv_obj_t *parent);

/**
 * @brief Get the LVGL object associated with the Modifiers widget.
 *
 * @param widget Pointer to the widget structure.
 * @return Pointer to the LVGL object (the container).
 */
lv_obj_t *zmk_widget_modifiers_obj(struct zmk_widget_modifiers *widget);
