// Fig. 9.3: fig09_03.cpp
// Program to test class Time.
// NOTE: This file must be compiled with Time.cpp.
#include <iostream>
#include <stdexcept> // for invalid_argument exception class
#include "Time.cpp"  // include definition of class Time from Time.h

int main()
{
    Time t;          // instantiate object t of class Time
    Time *ptrT = &t; // create pointer to t

    // output Time object t's initial values using pointer notation
    std::cout << "The initial universal time is ";
    ptrT->printUniversal();
    std::cout << "\nThe initial standard time is ";
    ptrT->printStandard();

    ptrT->setTime(13, 27, 6); // change time using pointer notation

    // output Time object t's new values using pointer notation
    std::cout << "\n\nUniversal time after setTime is ";
    ptrT->printUniversal();
    std::cout << "\nStandard time after setTime is ";
    ptrT->printStandard();

    // attempt to set the time with invalid values using pointer notation
    try
    {
        ptrT->setTime(99, 99, 99); // all values out of range
    }
    catch (std::invalid_argument &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    // output t's values after specifying invalid values using pointer notation
    std::cout << "\n\nAfter attempting invalid settings:"
              << "\nUniversal time: ";
    ptrT->printUniversal();
    std::cout << "\nStandard time: ";
    ptrT->printStandard();

    std::cout << std::endl;
    std::cout << "Press Enter to exit...";
    std::cin.get(); // waits for the user to press Enter
    return 0;
}
