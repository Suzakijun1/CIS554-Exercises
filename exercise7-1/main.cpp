// Fig17_02.cpp
#include <iostream>
#include "DivideByZeroException.h"
#include "NumberTooLargeException.h"

using namespace std;

double quotient(int numerator, int denominator)
{
    if (denominator == 0)
        throw DivideByZeroException();
    return static_cast<double>(numerator) / denominator;
}

int multiplication(int num1, int num2)
{
    int result = num1 * num2;
    if (result > 1000000)
        throw NumberTooLargeException();
    return result;
}

int main()
{
    int number1, number2;

    cout << "Enter two integers for division and multiplication (end-of-file to end): ";
    while (cin >> number1 >> number2)
    {
        try
        {
            double result = quotient(number1, number2);
            cout << "The quotient is: " << result << endl;

            int multResult = multiplication(number1, number2);
            cout << "The multiplication result is: " << multResult << endl;
        }
        catch (DivideByZeroException &divideByZeroException)
        {
            cout << "Exception occurred: "
                 << divideByZeroException.what() << endl;
        }
        catch (NumberTooLargeException &numberTooLargeException)
        {
            cout << "Exception occurred: "
                 << numberTooLargeException.what() << endl;
        }

        cout << "\nEnter two integers for division and multiplication (end-of-file to end): ";
    }

    cout << endl;
    return 0;
}
