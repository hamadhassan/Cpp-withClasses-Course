#include <iostream>
using namespace std;
int main()
{
    /*Write a program that takes 15 numbers from the user, it adds the first 5 numbers, multiplies the
    next 5 numbers, and subtract the next 5 numbers. After that it adds the first tw*/
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, Add, Mul, Sub, Total;
    cout << "Enter 1st Number:";
    cin >> n1;
    cout << "Enter 2nd Number:";
    cin >> n2;
    cout << "Enter 3rd Number:";
    cin >> n3;
    cout << "Enter 4th Number:";
    cin >> n4;
    cout << "Enter 5th Number:";
    cin >> n5;
    cout << "Enter 6th Number:";
    cin >> n6;
    cout << "Enter 7th Number:";
    cin >> n7;
    cout << "Enter 8th Number:";
    cin >> n8;
    cout << "Enter 9th Number:";
    cin >> n9;
    cout << "Enter 10th Number:";
    cin >> n10;
    cout << "Enter 11th Number:";
    cin >> n11;
    cout << "Enter 12th Number:";
    cin >> n12;
    cout << "Enter 13th Number:";
    cin >> n13;
    cout << "Enter 14th Number:";
    cin >> n14;
    cout << "Enter 15th Number:";
    cin >> n15;
    Add = n1 + n2 + n3 + n4 + n5;
    Mul = n6 * n7 * n8 * n9 * n10;
    Sub = n11 - n12 - n13 - n14 - n15;
    Total = Add + Mul;
    Total = Total - Sub;
    cout << "The final result is:" << Total;
}