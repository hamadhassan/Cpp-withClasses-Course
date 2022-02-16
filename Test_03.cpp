#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 15; i++)
    {
        for (int s = 1; s <= i; s++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 15; i >= 1; i--)
    {
        for (int s = 1; s <= i; s++)
        {
            cout << "*";
        }
        cout << endl;
    }
}