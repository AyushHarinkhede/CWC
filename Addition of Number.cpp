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