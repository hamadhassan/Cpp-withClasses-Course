1#include <iostream>
using namespace std;
int main()
{
    int number[10];
    int i;
    for (i = 0; i <=9; i++)
    {
        cout << "Enter a number: ";
        cin >> number[i];
    }
    for (int n = 9; n >= 0; n--)
    {
        cout << " " << number[n];
    }
}