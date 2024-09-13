///////////////////////////////////////////////////////////
// loc.cpp
// CIS554 Object Oriented Programming in C++
// Exercise 8_2 - Operator Overloading - non-member functions
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

// Overloaded + operator (member function)
loc loc::operator+(loc op2)
{
    loc temp;
    temp.longitude = longitude + op2.longitude;
    temp.latitude = latitude + op2.latitude;
    return temp;
}

// Overloaded += operator (non-member friend function)
loc &operator+=(loc &op1, const loc &op2)
{
    op1.longitude += op2.longitude;
    op1.latitude += op2.latitude;
    return op1;
}
