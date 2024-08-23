///////////////////////////////////////////////////////////
// loc.cpp
// CIS554 Object Oriented Programming in C++
// Exercise 8_1 - Operator Overloading - member functions
// Class loc implementation
///////////////////////////////////////////////////////////
#include "loc.h"

// Constructor
loc::loc(int lon, int lat) : longitude(lon), latitude(lat) {}

// Display function
void loc::show()
{
    cout << longitude << ", " << latitude << "\n";
}

// Overloaded + operator
loc loc::operator+(loc op2)
{
    loc temp;
    temp.longitude = longitude + op2.longitude;
    temp.latitude = latitude + op2.latitude;
    return temp;
}

// Overloaded += operator
loc &loc::operator+=(const loc &op2)
{
    longitude += op2.longitude;
    latitude += op2.latitude;
    return *this;
}
