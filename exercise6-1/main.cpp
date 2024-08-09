/////////////////////////////////////////////////////
// CIS554 Object Oriented Programming in C++
// Exercise 6_1 - Range-based for statements
/////////////////////////////////////////////////////

#include <iostream>
#include <iomanip>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Create an array of 10 int values
    array<int, 10> n;

    // Initialize elements of array n with random values between 1 and 100
    for (auto &value : n)
    {
        value = rand() % 100 + 1; // Random value between 1 and 100
    }

    // Output the array elements
    cout << "Element" << setw(13) << "Value" << endl;
    size_t index = 0;
    for (const auto &value : n)
    {
        cout << setw(7) << index++ << setw(13) << value << endl;
    }

    // Calculate the average value of the array elements
    int sum = 0;
    for (const auto &value : n)
    {
        sum += value;
    }
    double average = static_cast<double>(sum) / n.size();

    // Output the average value
    cout << "Average value: " << average << endl;

    // Wait for user input before closing the program
    cout << "Press Enter to exit...";
    cin.ignore(); // Ignore any leftover newline character in the buffer
    cin.get();    // Wait for user to press Enter

    return 0;
}