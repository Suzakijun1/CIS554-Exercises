///////////////////////////////////////////////////////////
// main.cpp
// CIS554 Object Oriented Programming in C++
// Exercise 8_2 - Operator Overloading - non-member functions
///////////////////////////////////////////////////////////
#include "loc.h"

int main()
{
    loc ob1(10, 10);
    loc ob2(20, 20);

    // Use the overloaded += operator
    ob2 += ob1;

    // Display the result
    ob2.show(); // Should output: 30, 30

    // Verify original ob1 is unchanged
    ob1.show(); // Should output: 10, 10

    return 0;
}
