#include <iostream>
using namespace std;
int main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int s = 5; s >= i; s--)
        {
            cout << " ";
        }
        for (int n = 1; n <= i; n++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
