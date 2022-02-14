#include <iostream>
using namespace std;
// prototype
int factorial(int number);

int main()
{
    int n, result;
    n = result = 0;
    cout << "Enter the number : ";
    cin >> n;
    result = factorial(n); // function called
    cout << "Factorial is : " << result;
}
// definition
int factorial(int number)
{
    int factorial;
    factorial = 1;
    for (number; number > 0; number--)
    {
        factorial = factorial * number;
    }
    return factorial;
}