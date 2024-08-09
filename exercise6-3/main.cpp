/////////////////////////////////////////////////////
// CIS554 Object Oriented Programming in C++
// Exercise 5_6 - Vector Objects
/////////////////////////////////////////////////////

#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Create a 10x10 2D vector of int values
    vector<vector<int>> n(10, vector<int>(10));

    // Initialize elements of the vector with random values between 1 and 100
    for (auto &row : n)
    {
        for (auto &value : row)
        {
            value = rand() % 100 + 1; // Random value between 1 and 100
        }
    }

    // Output the vector elements
    cout << "Vector contents:" << endl;
    for (const auto &row : n)
    {
        for (const auto &value : row)
        {
            cout << setw(4) << value << " ";
        }
        cout << endl;
    }

    // Calculate the average value of the vector elements
    int sum = 0;
    int total_elements = 0;
    for (const auto &row : n)
    {
        for (const auto &value : row)
        {
            sum += value;
            ++total_elements;
        }
    }
    double average = static_cast<double>(sum) / total_elements;

    // Output the average value
    cout << "Average value: " << average << endl;

    // Wait for user input before closing the program
    cout << "Press Enter to exit...";
    cin.ignore(); // Ignore any leftover newline character in the buffer
    cin.get();    // Wait for user to press Enter

    return 0;
}
