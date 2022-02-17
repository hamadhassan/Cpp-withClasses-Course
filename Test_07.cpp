#include <iostream>
using namespace std;
// decimal to binary
int main()
{
    int base, modulus, binary_number, decinal_number;
    base = 1;          // formula start with 1
    binary_number = 0; // the initial value is zero
    cout << "Enter the decimal number : ";
    cin >> decinal_number;
    if (decinal_number == 0)
    {
        binary_number = 0;
        cout << binary_number;
    }
    else if (decinal_number == 0)
    {
        binary_number = 1;
        cout << binary_number;
    }
    else
    {
        while (decinal_number != 0) // as the binary number of 0 and 1 is itself 0 and 1
        {
            modulus = decinal_number % 2;                     // it will give the binary number accoring to formula
            binary_number = binary_number + (modulus * base); // the resut of modulus will multipy the base of decimal number
            base = base * 10;                                 // the base of decimal number is 10
            decinal_number = decinal_number / 2;              // it will give the new number we take modulus easily
        }
        cout << binary_number;
    }
}
