#include "CNCShield.hpp"
#include "SimpleDS3231.hpp"
#include "SpaceDive.hpp"

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*
     * Create a CNCShield object and get a pointer to motor 0 (X axis).
     */
    CNCShield cnc_shield(1, 2,
                         3, 4,
                         5, 6,
                         7);

    SimpleDS3231 rtc;

    return 0;
}