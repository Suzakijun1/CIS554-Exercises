/////////////////////////////////////////////////////
// CIS554 Object Oriented Programming in C++
// Exercise 5_6 - Array Objects
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
    for (size_t i = 0; i < n.size(); ++i)
    {
        n[i] = rand() % 100 + 1; // Random value between 1 and 100
    }

    // Output the array elements
    cout << "Element" << setw(13) << "Value" << endl;
    for (size_t j = 0; j < n.size(); ++j)
    {
        cout << setw(7) << j << setw(13) << n[j] << endl;
    }

    // Calculate the average value of the array elements
    int sum = 0;
    for (size_t i = 0; i < n.size(); ++i)
    {
        sum += n[i];
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
