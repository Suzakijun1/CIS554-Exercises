/////////////////////////////////////////////////////
// CIS554 Object Oriented Programming in C++
// Exercise 5_1 - Reference Parameters
/////////////////////////////////////////////////////

#ifndef TIMEDIFF_H
#define TIMEDIFF_H

class TimeDiff
{
public:
    // Method to calculate the seconds since the previous noon
    static int SecondsSinceNoon(const int &hour, const int &minute, const int &second);

private:
    // Helper method to validate the time
    static bool ValidateTime(const int &hour, const int &minute, const int &second);
};

#endif
