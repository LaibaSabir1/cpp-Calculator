#include <iostream>
using namespace std;

// Function to handle division with zero check
double safeDivide(double numerator, double denominator)
{
    if (denominator == 0) 
    {
        cout << "Error: Division by zero is not allowed!" << endl;
        return 0;  // Returning zero to indicate an error.
    }
    else
    {
        return numerator / denominator;
    }
}

int main() 
{
    double num1, num2, result;
    char operation;

    // Get the first number from user input
    cout << "Enter first number: ";
    while (!(cin >> num1)) 
    {
        cout << "Invalid input! Please enter a valid number: ";
        cin.clear();
        cin.ignore(10000, '\n');  // Ignore the rest of the invalid input
    }

    // Get the operator (+, -, *, /)
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    // Get the second number from user input
    cout << "Enter second number: ";
    while (!(cin >> num2))
    {
        cout << "Invalid input! Please enter a valid number: ";
        cin.clear();
        cin.ignore(10000, '\n');  // Ignore the rest of the invalid input
    }

    // Perform the operation
    switch (operation)
    {
    case '+':
        result = num1 + num2;
        cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
        break;
    case '-':
        result = num1 - num2;
        cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
        break;
    case '*':
        result = num1 * num2;
        cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
        break;
    case '/':
        result = safeDivide(num1, num2);
        if (num2 != 0) 
        {  // Check if division by zero was attempted
            cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
        }
        break;
    default:
        cout << "Error: Invalid operator!" << endl;
    }

    return 0;
}
