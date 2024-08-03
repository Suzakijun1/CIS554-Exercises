/////////////////////////////////////////////////////
// CIS554 Object Oriented Programming in C++
// Exercise 5_1 - Reference parameters
/////////////////////////////////////////////////////

#include "TimeDiff.h"
#include <iostream>

// Validate the input time
bool TimeDiff::ValidateTime(const int &hour, const int &minute, const int &second)
{
    if (hour < 0 || hour > 23)
        return false;
    if (minute < 0 || minute > 59)
        return false;
    if (second < 0 || second > 59)
        return false;
    return true;
}

// Calculate the seconds since the previous noon
int TimeDiff::SecondsSinceNoon(const int &hour, const int &minute, const int &second)
{
    if (!ValidateTime(hour, minute, second))
    {
        return -1;
    }

    int total_seconds = hour * 3600 + minute * 60 + second;
    int seconds_since_noon;

    if (hour >= 12)
    {
        // If the hour is 12 or later, calculate the difference from noon of the same day
        seconds_since_noon = total_seconds - (12 * 3600);
    }
    else
    {
        // If the hour is earlier than 12, calculate the difference from noon of the previous day
        seconds_since_noon = total_seconds + (12 * 3600);
    }

    return seconds_since_noon;
}
