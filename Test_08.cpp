#include <iostream>
using namespace std;
// binary to decimal;
int main()
{
    int modulus, binary_number, decimal_number, base;
    decimal_number = 0;
    base = 1; // the formula of convertion start with 1
    cout << "Enter the binary number : ";
    cin >> binary_number;
    if (binary_number == 0)
    {
        decimal_number = 0;
        cout << decimal_number;
    }
    else if (binary_number == 0)
    {
        decimal_number = 1;
        cout << decimal_number;
    }
    else
    {
        // 10110 = 22

        while (binary_number != 0)
        {
            modulus = binary_number % 10; // this is beacuse the moduus can saved the last digit of binary number
            decimal_number = decimal_number + (modulus * base);
            binary_number = binary_number / 10; // this will drop the last digit and give new number then we take modulus and convert them easily
            base = base * 2;                    // the base of binary number is 2
        }
        cout << "The decimal number is : " << decimal_number;
    }
}