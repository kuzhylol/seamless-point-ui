// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 9.1.0
// Project name: seamless-point-ui

#include "../ui.h"

void ui_idle_screen_init(void)
{
    ui_idle = lv_obj_create(NULL);
    lv_obj_remove_flag(ui_idle, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_connectivity = lv_obj_create(ui_idle);
    lv_obj_set_width(ui_connectivity, lv_pct(100));
    lv_obj_set_height(ui_connectivity, lv_pct(10));
    lv_obj_set_align(ui_connectivity, LV_ALIGN_TOP_MID);
    lv_obj_remove_flag(ui_connectivity, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_connectivity, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_connectivity, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_connectivity, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_connectivity, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_date = lv_obj_create(ui_idle);
    lv_obj_set_width(ui_date, lv_pct(110));
    lv_obj_set_height(ui_date, lv_pct(30));
    lv_obj_set_x(ui_date, 0);
    lv_obj_set_y(ui_date, 3);
    lv_obj_set_align(ui_date, LV_ALIGN_CENTER);
    lv_obj_remove_flag(ui_date, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_date, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_date, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_date, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_date, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_linux_time = lv_label_create(ui_date);
    lv_obj_set_width(ui_linux_time, LV_SIZE_CONTENT);   /// 3
    lv_obj_set_height(ui_linux_time, LV_SIZE_CONTENT);    /// 3
    lv_obj_set_align(ui_linux_time, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_linux_time, "10:00");
    lv_obj_set_style_text_font(ui_linux_time, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_linux_date = lv_label_create(ui_date);
    lv_obj_set_width(ui_linux_date, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_linux_date, LV_SIZE_CONTENT);    /// -5
    lv_obj_set_align(ui_linux_date, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_linux_date, "04 Apr 2024");

    ui_bt_icon = lv_image_create(ui_date);
    lv_image_set_src(ui_bt_icon, &ui_img_bt2_png);
    lv_obj_set_width(ui_bt_icon, 30);
    lv_obj_set_height(ui_bt_icon, 30);
    lv_obj_set_x(ui_bt_icon, -30);
    lv_obj_set_y(ui_bt_icon, 1);
    lv_obj_set_align(ui_bt_icon, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_bt_icon, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_remove_flag(ui_bt_icon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_wifi_icon = lv_image_create(ui_date);
    lv_image_set_src(ui_wifi_icon, &ui_img_1265400908);
    lv_obj_set_width(ui_wifi_icon, 30);
    lv_obj_set_height(ui_wifi_icon, 30);
    lv_obj_set_x(ui_wifi_icon, 30);
    lv_obj_set_y(ui_wifi_icon, 0);
    lv_obj_set_align(ui_wifi_icon, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_wifi_icon, LV_OBJ_FLAG_CLICKABLE);     /// Flags
    lv_obj_remove_flag(ui_wifi_icon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_devices = lv_obj_create(ui_idle);
    lv_obj_set_width(ui_devices, lv_pct(100));
    lv_obj_set_height(ui_devices, lv_pct(30));
    lv_obj_set_x(ui_devices, 0);
    lv_obj_set_y(ui_devices, -63);
    lv_obj_set_align(ui_devices, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_devices, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_devices, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_add_flag(ui_devices, LV_OBJ_FLAG_OVERFLOW_VISIBLE);     /// Flags
    lv_obj_remove_flag(ui_devices, LV_OBJ_FLAG_SCROLL_ELASTIC);      /// Flags
    lv_obj_set_scrollbar_mode(ui_devices, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_devices, LV_DIR_HOR);
    lv_obj_set_style_bg_color(ui_devices, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_devices, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_devices, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_devices, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_device_0 = lv_obj_create(ui_devices);
    lv_obj_set_width(ui_device_0, lv_pct(100));
    lv_obj_set_height(ui_device_0, lv_pct(100));
    lv_obj_set_x(ui_device_0, -153);
    lv_obj_set_y(ui_device_0, 2);
    lv_obj_set_align(ui_device_0, LV_ALIGN_LEFT_MID);
    lv_obj_add_state(ui_device_0, LV_STATE_FOCUSED);       /// States
    lv_obj_add_flag(ui_device_0, LV_OBJ_FLAG_ADV_HITTEST | LV_OBJ_FLAG_SCROLL_ON_FOCUS | LV_OBJ_FLAG_SCROLL_WITH_ARROW |
                    LV_OBJ_FLAG_SCROLL_ONE);    /// Flags
    lv_obj_remove_flag(ui_device_0, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_GESTURE_BUBBLE);      /// Flags
    lv_obj_set_scroll_dir(ui_device_0, LV_DIR_HOR);
    lv_obj_set_style_bg_color(ui_device_0, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_device_0, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_device_0, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_device_0, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_text_device_1 = lv_label_create(ui_device_0);
    lv_obj_set_width(ui_text_device_1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_text_device_1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_text_device_1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_text_device_1, "JBL Speaker");

    ui_device_2 = lv_obj_create(ui_devices);
    lv_obj_set_width(ui_device_2, lv_pct(100));
    lv_obj_set_height(ui_device_2, lv_pct(100));
    lv_obj_set_x(ui_device_2, -153);
    lv_obj_set_y(ui_device_2, 2);
    lv_obj_set_align(ui_device_2, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_device_2, LV_OBJ_FLAG_ADV_HITTEST | LV_OBJ_FLAG_SCROLL_ON_FOCUS | LV_OBJ_FLAG_SCROLL_WITH_ARROW |
                    LV_OBJ_FLAG_SCROLL_ONE);    /// Flags
    lv_obj_remove_flag(ui_device_2, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_GESTURE_BUBBLE |
                       LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_scroll_dir(ui_device_2, LV_DIR_HOR);
    lv_obj_set_style_bg_color(ui_device_2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_device_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_device_2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_device_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_text_device_3 = lv_label_create(ui_device_2);
    lv_obj_set_width(ui_text_device_3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_text_device_3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_text_device_3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_text_device_3, "Headphones");

    ui_clients = lv_obj_create(ui_idle);
    lv_obj_set_width(ui_clients, lv_pct(100));
    lv_obj_set_height(ui_clients, lv_pct(35));
    lv_obj_set_x(ui_clients, 0);
    lv_obj_set_y(ui_clients, 80);
    lv_obj_set_align(ui_clients, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_clients, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_clients, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_remove_flag(ui_clients, LV_OBJ_FLAG_SCROLL_ELASTIC);      /// Flags
    lv_obj_set_scrollbar_mode(ui_clients, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_clients, LV_DIR_HOR);
    lv_obj_set_style_bg_color(ui_clients, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_clients, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_clients, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_clients, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_connection_0 = lv_obj_create(ui_clients);
    lv_obj_set_width(ui_connection_0, lv_pct(100));
    lv_obj_set_height(ui_connection_0, lv_pct(60));
    lv_obj_set_x(ui_connection_0, -153);
    lv_obj_set_y(ui_connection_0, 2);
    lv_obj_set_align(ui_connection_0, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_connection_0, LV_OBJ_FLAG_ADV_HITTEST | LV_OBJ_FLAG_SCROLL_ON_FOCUS | LV_OBJ_FLAG_SCROLL_WITH_ARROW |
                    LV_OBJ_FLAG_SCROLL_ONE);    /// Flags
    lv_obj_remove_flag(ui_connection_0, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE |
                       LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SCROLLABLE);     /// Flags
    lv_obj_set_scroll_dir(ui_connection_0, LV_DIR_HOR);
    lv_obj_set_style_bg_color(ui_connection_0, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_connection_0, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_connection_0, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_connection_0, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_text_connection_0 = lv_label_create(ui_connection_0);
    lv_obj_set_width(ui_text_connection_0, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_text_connection_0, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_text_connection_0, LV_ALIGN_CENTER);
    lv_label_set_text(ui_text_connection_0, "MacBook");

    ui_connection_1 = lv_obj_create(ui_clients);
    lv_obj_set_width(ui_connection_1, lv_pct(100));
    lv_obj_set_height(ui_connection_1, lv_pct(60));
    lv_obj_set_x(ui_connection_1, -153);
    lv_obj_set_y(ui_connection_1, 2);
    lv_obj_set_align(ui_connection_1, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_connection_1, LV_OBJ_FLAG_ADV_HITTEST | LV_OBJ_FLAG_SCROLL_ON_FOCUS | LV_OBJ_FLAG_SCROLL_WITH_ARROW |
                    LV_OBJ_FLAG_SCROLL_ONE);    /// Flags
    lv_obj_remove_flag(ui_connection_1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE |
                       LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SCROLLABLE);     /// Flags
    lv_obj_set_scroll_dir(ui_connection_1, LV_DIR_HOR);
    lv_obj_set_style_bg_color(ui_connection_1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_connection_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_connection_1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_connection_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_text_connection_1 = lv_label_create(ui_connection_1);
    lv_obj_set_width(ui_text_connection_1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_text_connection_1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_text_connection_1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_text_connection_1, "IPhone 16");

    ui_connection_2 = lv_obj_create(ui_clients);
    lv_obj_set_width(ui_connection_2, lv_pct(100));
    lv_obj_set_height(ui_connection_2, lv_pct(60));
    lv_obj_set_x(ui_connection_2, -153);
    lv_obj_set_y(ui_connection_2, 2);
    lv_obj_set_align(ui_connection_2, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_connection_2, LV_OBJ_FLAG_ADV_HITTEST | LV_OBJ_FLAG_SCROLL_ON_FOCUS | LV_OBJ_FLAG_SCROLL_WITH_ARROW |
                    LV_OBJ_FLAG_SCROLL_ONE);    /// Flags
    lv_obj_remove_flag(ui_connection_2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE |
                       LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE);     /// Flags
    lv_obj_set_scroll_dir(ui_connection_2, LV_DIR_HOR);
    lv_obj_set_style_bg_color(ui_connection_2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_connection_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_connection_2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_connection_2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_text_connection_2 = lv_label_create(ui_connection_2);
    lv_obj_set_width(ui_text_connection_2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_text_connection_2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_text_connection_2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_text_connection_2, "Windows PC");

    lv_obj_add_event_cb(ui_device_0, ui_event_device_0, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_device_2, ui_event_device_2, LV_EVENT_ALL, NULL);

}
