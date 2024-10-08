///////////////////////////////////////////////////////////
// loc.h
// CIS554 Object Oriented Programming in C++
// Exercise 8_2 - Operator Overloading - non-member functions
// Class loc interface
///////////////////////////////////////////////////////////
#ifndef __LOC_H__
#define __LOC_H__

#include <iostream>
using std::cout;

class loc
{
    int longitude, latitude;

public:
    loc(int lon = 0, int lat = 0);
    void show();
    loc operator+(loc op2);

    // Friend function declaration for operator+=
    friend loc &operator+=(loc &op1, const loc &op2);
};

#endif // __LOC_H__
