# Add sources
add_executable(SpaceDive
    src/main.cpp
    )

# Add headers
target_include_directories(SpaceDive PRIVATE
    include
    )

# Pull in dependencies
target_link_libraries(SpaceDive
    CNCShield
    SimpleDS3231
    )

# Check if Debug build
if (CMAKE_BUILD_TYPE MATCHES Debug)
    pico_enable_stdio_usb(spave_dive 0)
    pico_enable_stdio_uart(spave_dive 1)
    add_definitions(-DDEBUG)

    # create map/bin/hex file etc.
    pico_add_extra_outputs(SpaceDive)
endif(CMAKE_BUILD_TYPE MATCHES Debug)

