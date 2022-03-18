#include <iostream>
using namespace std;
/*Write a program that shows address of a variable using & operator.*/
int main()
{
    int a = 5;
    cout << "Variable value : " << a << endl;
    cout << "Variable address : " << &a;
}