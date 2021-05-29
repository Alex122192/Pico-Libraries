cmake_minimum_required(VERSION 3.12)

include(pico_sdk_import.cmake)

project(Ultrasonic-Library)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(PICO_EXAMPLES_PATH ${PROJECT_SOURCE_DIR})

# Initialize the SDK
pico_sdk_init()

add_subdirectory(Ultrasonic)
add_subdirectory(examples)