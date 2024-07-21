SET(SOURCES screens/ui_idle.c
    screens/ui_device.c
    ui_clients.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    images/ui_img_bt2_png.c
    images/ui_img_1265400908.c
    images/ui_img_on2_png.c
    images/ui_img_off2_png.c)

add_library(ui ${SOURCES})
target_include_directories(ui PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(ui lvgl)
