add_library(Ultrasonic Ultrasonic.cpp Ultrasonic.h)

target_link_libraries(Ultrasonic pico_stdlib hardware_gpio hardware_timer)

target_include_directories(Ultrasonic PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")