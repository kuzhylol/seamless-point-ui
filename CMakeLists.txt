cmake_minimum_required(VERSION 3.10)
project(lvgl)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(lvgl)
add_subdirectory(ui)

target_include_directories(lvgl PUBLIC ${PROJECT_SOURCE_DIR})
add_executable(ui-layer main.c)
target_link_libraries(ui-layer m ui lvgl lvgl::thorvg)
