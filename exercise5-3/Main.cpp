/////////////////////////////////////////////////////
// CIS554 Object Oriented Programming in C++
// Exercise 5_3 - Function overloading
/////////////////////////////////////////////////////

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class Maximum
{
public:
    int GetMaximumValue(int num1, int num2, int num3)
    {
        cout << "GetMaximumValue with 3 parameters was called" << endl;
        int maxValue = num1;
        if (num2 > maxValue)
            maxValue = num2;
        if (num3 > maxValue)
            maxValue = num3;
        return maxValue;
    }

    int GetMaximumValue(int num1, int num2, int num3, int num4)
    {
        cout << "GetMaximumValue with 4 parameters was called" << endl;
        int maxValue = num1;
        if (num2 > maxValue)
            maxValue = num2;
        if (num3 > maxValue)
            maxValue = num3;
        if (num4 > maxValue)
            maxValue = num4;
        return maxValue;
    }
};

int main()
{
    int num1, num2, num3, num4;
    char proceed;
    Maximum max;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;

    cout << "Do you want to enter a fourth number (y/n)? ";
    cin >> proceed;

    if (proceed == 'y' || proceed == 'Y')
    {
        cout << "Enter fourth number: ";
        cin >> num4;
        cout << "Max Value = " << max.GetMaximumValue(num1, num2, num3, num4) << endl;
    }
    else
    {
        cout << "Max Value = " << max.GetMaximumValue(num1, num2, num3) << endl;
    }

    // Wait for user input before closing the program
    cout << "Press Enter to exit...";
    cin.ignore(); // Ignore any leftover newline character in the buffer
    cin.get();    // Wait for user to press Enter

    return 0;
}
