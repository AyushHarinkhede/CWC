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

// This is a sample C++ program demonstrating basic input/output and addition of two numbers.

// This is a sample C++ program demonstrating basic input/output and addition of two numbers.
// It uses the C++17 language standard version.
// To compile and run this code, use a C++17 compatible compiler.
// Example compilation command: g++ -std=c++17 CWC_Sample.cpp -o CWC_Sample
// Example run command: ./CWC_Sample

// substraction of two numbers 
double difference = num1 - num2; 
cout << "The difference of " << num1 << " and " << num2 << " is " << difference << endl; 


// multiplication of two numbers
double product = num1 * num2;
cout << "The product of " << num1 << " and " << num2 << " is " << product << endl;

  // division of two numbers
if (num2 != 0) {
    double quotient = num1 / num2;
    cout << "The quotient of " << num1 << " and " << num2 << " is " << quotient << endl;
} else {
    cout << "Division by zero is not allowed." << endl;
}


 // Prompt the user for input
    std::cout << "Enter a number to see its multiplication table: ";
    
    // Check if the input is a valid integer
    if (!(std::cin >> number)) {
     std::cout << "Invalid input. Please enter an integer." << std::endl;
        return 1; // Exit with an error code
    }

    std::cout << "\nMultiplication Table for " << number << ":" << std::endl;
    std::cout << "-------------------------" << std::endl;

    // Loop from 1 to 10
    for (int i = 1; i <= 10; ++i) {
        // Print the multiplication equation
        // std::setw(2) ensures the multiplier (i) is aligned nicely
    std::cout << number << " x " << std::setw(2) << i << " = " << (number * i) << std::endl;
    }



  std::cout << "Enter a number: ";

    if (!(std::cin >> number)) {
     std::cout << "Invalid input. Please enter an integer." << std::endl;
        return 1;
    }

std::cout << "\nMultiplication Table for " << number << ":" << std::endl;
    std::cout << "-------------------------" << std::endl;


    for (int i = 1; i <= 10; ++i) {
     std::cout << number << " x " << std::setw(2) << i << " = " << (number * i) << std::endl;
    }


    
    return 0;
}
