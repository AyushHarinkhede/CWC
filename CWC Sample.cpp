#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double num1, num2, sum; //Addition of Two Num.

    // Input from the user
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Adding the two numbers
    sum = num1 + num2;

    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;

    return 0;
}

// This is a sample C++ program demonstrating basic input/output and addition of two numbers.
// It uses the C++17 language standard version.
// To compile and run this code, use a C++17 compatible compiler.
// Example compilation command: g++ -std=c++17 CWC_Sample.cpp -o CWC_Sample
// Example run command: ./CWC_Sample
