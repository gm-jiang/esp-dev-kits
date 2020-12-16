set(SOURCES "lvgl_main.c"
            "connect.c"
            "usr_sntp.c"
            "http_req.c")

idf_component_register(SRCS ${SOURCES}
                    INCLUDE_DIRS include
                    REQUIRES board lcd led_strip lvgl_esp32_drivers lvgl_touch lvgl_tft lvgl lv_examples
                    nvs_flash esp_netif lwip json)

target_compile_definitions(${COMPONENT_LIB} PRIVATE LV_CONF_INCLUDE_SIMPLE=1)