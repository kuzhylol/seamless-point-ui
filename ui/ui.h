// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 9.1.0
// Project name: seamless-point-ui

#ifndef _SEAMLESS_POINT_UI_UI_H
#define _SEAMLESS_POINT_UI_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl/lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"

// SCREEN: ui_idle
void ui_idle_screen_init(void);
extern lv_obj_t * ui_idle;
extern lv_obj_t * ui_connectivity;
extern lv_obj_t * ui_date;
extern lv_obj_t * ui_linux_time;
extern lv_obj_t * ui_linux_date;
extern lv_obj_t * ui_bt_icon;
extern lv_obj_t * ui_wifi_icon;
extern lv_obj_t * ui_devices;
void ui_event_device_0(lv_event_t * e);
extern lv_obj_t * ui_device_0;
extern lv_obj_t * ui_text_device_1;
void ui_event_device_2(lv_event_t * e);
extern lv_obj_t * ui_device_2;
extern lv_obj_t * ui_text_device_3;
extern lv_obj_t * ui_clients;
extern lv_obj_t * ui_connection_0;
extern lv_obj_t * ui_text_connection_0;
extern lv_obj_t * ui_connection_1;
extern lv_obj_t * ui_text_connection_1;
extern lv_obj_t * ui_connection_2;
extern lv_obj_t * ui_text_connection_2;
// SCREEN: ui_device
void ui_device_screen_init(void);
void ui_event_device(lv_event_t * e);
extern lv_obj_t * ui_device;
void ui_event_Panel31(lv_event_t * e);
extern lv_obj_t * ui_Panel31;
extern lv_obj_t * ui_volume_icon;
extern lv_obj_t * ui_volume;
extern lv_obj_t * ui_volume_slider;
extern lv_obj_t * ui_status;
extern lv_obj_t * ui_device_status;
extern lv_obj_t * ui_status_control;
extern lv_obj_t * ui____initial_actions0;


LV_IMG_DECLARE(ui_img_bt2_png);    // assets/bt2.png
LV_IMG_DECLARE(ui_img_1265400908);    // assets/wifi2-c.png
LV_IMG_DECLARE(ui_img_on2_png);    // assets/ON2.png
LV_IMG_DECLARE(ui_img_off2_png);    // assets/OFF2.png






void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
