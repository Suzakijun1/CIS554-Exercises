// Time.h
// Time class definition. Member functions defined in Time.cpp.

#ifndef TIME_H
#define TIME_H

class Time
{
public:
    Time();                      // constructor
    void setTime(int, int, int); // set hour, minute, second
    void printUniversal() const; // print time in universal-time format
    void printStandard() const;  // print time in standard-time format
private:
    int hour;   // 0 - 23 (24-hour clock format)
    int minute; // 0 - 59
    int second; // 0 - 59
};

#endif
