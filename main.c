#include "lvgl/lvgl.h"
#include <unistd.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ui.h"

void format_linux_date(void)
{
    time_t rawtime;
    struct tm *timeinfo;
    char buf[80];

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buf, sizeof(buf), "%H:%M", timeinfo);
    lv_label_set_text(ui_linux_time, buf);

    strftime(buf, sizeof(buf), "%d %b %Y", timeinfo);
    lv_label_set_text(ui_linux_date, buf);
}

int main(void)
{
    lv_init();

    const char *device = "/dev/fb0";

    lv_display_t *disp = lv_linux_fbdev_create();

    lv_linux_fbdev_set_file(disp, device);

    lv_indev_t *input = lv_evdev_create(LV_INDEV_TYPE_POINTER, "/dev/input/event3");
    lv_indev_set_display(input, disp);

    ui_init();

    /*Handle LVGL tasks*/
    while(1) {
        format_linux_date();
        lv_timer_handler();
        usleep(1000);
    }

    return 0;
}
