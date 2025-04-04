// modifiers.h
#pragma once

#include <lvgl.h>          // Include LVGL header for lv_obj_t
#include <zephyr/kernel.h> // Include Zephyr kernel for sys_snode_t

/**
 * @brief Structure for the Modifier Indicator widget instance.
 *        Holds the LVGL object and the linked list node.
 */
struct zmk_widget_modifier_indicator {
  sys_snode_t node; // Node structure for use in linked lists (like sys_slist_t)
  lv_obj_t *obj; // Pointer to the core LVGL object for this widget (the label)
};

/**
 * @brief Initializes a new modifier indicator widget.
 * @param widget Pointer to the widget structure to initialize.
 * @param parent The parent LVGL object to attach this widget to.
 * @return 0 on success, negative error code otherwise.
 */
int zmk_widget_modifier_indicator_init(
    struct zmk_widget_modifier_indicator *widget, lv_obj_t *parent);

/**
 * @brief Returns the underlying LVGL object associated with this widget.
 * @param widget Pointer to the widget structure.
 * @return Pointer to the LVGL label object.
 */
lv_obj_t *
zmk_widget_modifier_indicator_obj(struct zmk_widget_modifier_indicator *widget);
