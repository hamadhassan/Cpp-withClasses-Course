#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    if (n = 0) // NOTE THE OPERATOR!!!
        cout << "n is zero"
             << ".\n";
    else
        cout << "n is not zero"
             << ".\n";
    cout << "The square of n is " << n * n << ".\n";
}