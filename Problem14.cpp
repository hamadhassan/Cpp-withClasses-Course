#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if (n < 10)
        cout << "less than 10" << endl;
    else if (n > 5)
        cout << "greater than 5" << endl;
    else
        cout << "not interesting" << endl;
}