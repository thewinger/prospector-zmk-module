#include <lvgl.h>
#include <zephyr/device.h>
#include <zephyr/drivers/display.h>
#include <zephyr/kernel.h>

#include "widgets/battery_bar.h"
#include "widgets/caps_word_indicator.h"
#include "widgets/layer_roller.h"

#include <fonts.h>
#include <sf_symbols.h>

#include <zmk/keymap.h>

#include <zephyr/logging/log.h>
LOG_MODULE_DECLARE(zmk, CONFIG_ZMK_LOG_LEVEL);

static struct zmk_widget_layer_roller layer_roller_widget;
static struct zmk_widget_battery_bar battery_bar_widget;
static struct zmk_widget_caps_word_indicator caps_word_indicator_widget;

lv_obj_t *zmk_display_status_screen() {
  lv_obj_t *screen;
  screen = lv_obj_create(NULL);
  lv_obj_set_style_bg_color(screen, lv_color_hex(0x000000), LV_PART_MAIN);
  lv_obj_set_style_bg_opa(screen, 255, LV_PART_MAIN);

#ifdef CONFIG_DT_HAS_ZMK_BEHAVIOR_CAPS_WORD_ENABLED
  zmk_widget_caps_word_indicator_init(&caps_word_indicator_widget, screen);
  lv_obj_align(zmk_widget_caps_word_indicator_obj(&caps_word_indicator_widget),
               LV_ALIGN_TOP_RIGHT, 0, 0);
#endif

  zmk_widget_battery_bar_init(&battery_bar_widget, screen);
  lv_obj_set_size(zmk_widget_battery_bar_obj(&battery_bar_widget), lv_pct(100),
                  50);
  lv_obj_align(zmk_widget_battery_bar_obj(&battery_bar_widget),
               LV_ALIGN_BOTTOM_MID, 0, 0);

  zmk_widget_layer_roller_init(&layer_roller_widget, screen);
  lv_obj_set_size(zmk_widget_layer_roller_obj(&layer_roller_widget),
                  lv_pct(100), 140);
  lv_obj_align(zmk_widget_layer_roller_obj(&layer_roller_widget),
               LV_ALIGN_LEFT_MID, 0, 0);

  return screen;
}
