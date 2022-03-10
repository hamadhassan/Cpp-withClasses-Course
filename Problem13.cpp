#include <iostream>
using namespace std;
int main()
{
    float income;
    cout << "Enter your monthly income: ";
    cin >> income;
    if (income < 0.0)
        cout << "You are going farther into debt every month." << endl;
    else if (income < 1200.00)
        cout << "You are living below the poverty line." << endl;
    else if (income < 2500.00)
        cout << "You are living in moderate comfort." << endl;
    else
        cout << "You are well off." << endl;
}