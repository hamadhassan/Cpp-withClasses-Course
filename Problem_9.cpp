#include <iostream>
using namespace std;
int main()
{
    /*There is a modulus operator that returns the remainder like if we take modulus of 4 with 3 it
    would return 1. If we take 7 % 4 it would return 3.
    With the help of a modulus operator, write a program that takes a 4 digit number from the user
    and sum individual digits.*/
    int n, n1, n2, n3, n4;
    cout << "Enter Four digit number:";
    cin >> n;
    n1 = n % 10;
    n2 = n / 10;
    n2 = n2 % 10;
    n3 = n / 100;
    n3 = n3 % 10;
    n4 = n / 1000;
    n4 = n4 % 10;
    n = n1 + n2 + n3 + n4;
    cout << "The Sum is " << n;
}