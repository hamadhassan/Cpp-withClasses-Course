#include <iostream>
using namespace std;
/*Write a program that assigns address of integer variable to pointer variable
using & operator.*/
int main()
{
    int a = 0;
    int *p;
    p = &a;
    cout << "Address of variable a : " << &a << endl;
    cout << "Address of variable a : " << p;
}