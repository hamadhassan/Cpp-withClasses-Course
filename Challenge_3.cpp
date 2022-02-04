#include <iostream>
using namespace std;
// Function prototype or deceleration
int addition(int n1, int n2);       // addition
int subtraction(int n1, int n2);    // subtraction
int multiplication(int n1, int n2); // multiplication
int division(int n1, int n2);       // division
// Mian Function
int main()
{
    /*Create a function that takes two numbers and a mathematical operator + - / * and will perform a
    calculation with the given numbers and returns the output result.
    Test Cases: */
    int n1, n2, result; // first number, second number and result of two number
    char op;            // operators
    cout << "Enter first number : ";
    cin >> n1;
    cout << "Enter second number : ";
    cin >> n2;
    cout << "Enter the operator (+,-,/,*) : ";
    cin >> op;
    // addition
    if (op == '+')
    {
        result = addition(n1, n2); // Function call
    }
    // Subtraction
    else if (op == '-')
    {
        result = subtraction(n1, n2); // Function call
    }
    // Multiplication
    else if (op == '*')
    {
        result = multiplication(n1, n2); // Function call
    }
    // Division
    else if (op == '/')
    {
        result = division(n1, n2); // Function call
    }
    // Not right output
    else
    {
        cout << "Invalid Input...";
    }
    cout << "Result is : " << result;
}
// Function Defintion

int addition(int n1, int n2)
{ // Function body
    int result = n1 + n2;
    return result;
}
int subtraction(int n1, int n2)
{ // Function body
    int result = n1 - n2;
    return result;
}
int multiplication(int n1, int n2)
{ // Function body
    int result = n1 * n2;
    return result;
}
int division(int n1, int n2)
{ // Function body
    int result = n1 / n2;
    return result;
}
