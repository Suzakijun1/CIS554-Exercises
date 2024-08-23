// Time.cpp
// Member-function definitions for class Time.
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"

// Time constructor initializes each data member to zero
Time::Time() : hour(0), minute(0), second(0) {}

// Set new Time value using universal time.
// Validate the data; set invalid values to 0.
void Time::setTime(int h, int m, int s)
{
    if (h >= 0 && h < 24)
        hour = h;
    else
        throw std::invalid_argument("hour must be 0-23");

    if (m >= 0 && m < 60)
        minute = m;
    else
        throw std::invalid_argument("minute must be 0-59");

    if (s >= 0 && s < 60)
        second = s;
    else
        throw std::invalid_argument("second must be 0-59");
}

// Print Time in universal-time format (HH:MM:SS)
void Time::printUniversal() const
{
    std::cout << std::setfill('0') << std::setw(2) << hour << ":"
              << std::setw(2) << minute << ":" << std::setw(2) << second;
}

// Print Time in standard-time format (HH:MM:SS AM or PM)
void Time::printStandard() const
{
    std::cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
              << std::setfill('0') << std::setw(2) << minute << ":"
              << std::setw(2) << second << (hour < 12 ? " AM" : " PM");
}
