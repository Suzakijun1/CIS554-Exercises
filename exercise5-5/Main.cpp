/////////////////////////////////////////////////////
// CIS554 Object Oriented Programming in C++
// Exercise 5_5 - Function overloading
/////////////////////////////////////////////////////
#include <iostream>
using std::cin;
using std::cout;

// Function to compute the sum of numbers from 1 to N recursively
int sum_recursive(int N)
{
    if (N <= 1)
    {
        return N; // Base case: if N is 1 or less, return N
    }
    return N + sum_recursive(N - 1); // Recursive case: add N to the sum of numbers from 1 to N-1
}

int main()
{
    int N;
    std::cout << "Enter a positive integer: ";
    std::cin >> N;

    if (N <= 0)
    {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1; // Exit the program with an error code if the input is not positive
    }

    int sum = sum_recursive(N);
    std::cout << "The sum of all numbers from 1 to " << N << " is " << sum << std::endl;
    // Wait for user input before closing the program
    cout << "Press Enter to exit...";
    cin.ignore(); // Ignore any leftover newline character in the buffer
    cin.get();    // Wait for user to press Enter

    return 0;
}
