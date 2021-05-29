add_executable(Ultrasonic_Example Ultrasonic_Example.cpp)

target_link_libraries(Ultrasonic_Example 
   pico_stdlib 
   hardware_uart
   Ultrasonic)

pico_enable_stdio_usb(Ultrasonic_Example 1)
pico_enable_stdio_uart(Ultrasonic_Example 0)

pico_add_extra_outputs(Ultrasonic_Example)
