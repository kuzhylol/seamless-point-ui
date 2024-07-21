#include "ui.h"

lv_obj_t * ui_connection;
lv_obj_t * ui_text_connection;

void draw_client(char *client_name)
{
    ui_connection = lv_obj_create(ui_clients);
    lv_obj_set_width(ui_connection, lv_pct(100));
    lv_obj_set_height(ui_connection, lv_pct(60));
    lv_obj_set_x(ui_connection, -153);
    lv_obj_set_y(ui_connection, 2);
    lv_obj_set_align(ui_connection, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_connection, LV_OBJ_FLAG_ADV_HITTEST | LV_OBJ_FLAG_SCROLL_ON_FOCUS | LV_OBJ_FLAG_SCROLL_WITH_ARROW |
                    LV_OBJ_FLAG_SCROLL_ONE);    /// Flags
    lv_obj_remove_flag(ui_connection, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE |
                       LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SCROLLABLE);     /// Flags
    lv_obj_set_scroll_dir(ui_connection, LV_DIR_HOR);
    lv_obj_set_style_bg_color(ui_connection, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_connection, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_connection, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_connection, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_text_connection = lv_label_create(ui_connection);
    lv_obj_set_width(ui_text_connection, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_text_connection, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_text_connection, LV_ALIGN_CENTER);
    lv_label_set_text(ui_text_connection, client_name);
}

void remove_client_title(void)
{
    lv_obj_del(ui_text_connection);
    lv_obj_del(ui_connection);
}
