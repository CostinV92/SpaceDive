cmake_minimum_required(VERSION 3.12)

# Pull in SDK (must be before project)
include(pico_sdk_import.cmake)

project(SpaceDive C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Initialize the SDK
pico_sdk_init()

# Pull in CNCSHield library
include(cnc_shield_lib_import.cmake)

# Pull in SimpleDS3231 library
include(simple_ds3231_lib_import.cmake)

add_subdirectory(SpaceDive)