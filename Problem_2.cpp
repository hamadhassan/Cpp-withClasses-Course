
#include <iostream>
using namespace std;
int main()
{
    /*Write a C++ program to ask the user to enter two integers. Then, store the sum of those two integers in a
    variable and then display the sum on the screen.*/
    int n1, n2;
    cout << "Enter first number:";
    cin >> n1;
    cout << "Enter second number:";
    cin >> n2;
    n1 = n1 + n2;
    cout << "The sum of two number is:" << n1;
}