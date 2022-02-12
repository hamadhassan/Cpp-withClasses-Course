#include <iostream>
using namespace std;
/* [Display name ten times */
// Function Prototype
void name();
int main()
{
    cout << "Name is printed ten times." << endl;
    name(); // function call
}
// Function Definition
void name()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "Name: Muhammad Hammad Hassan" << endl;
    }
}
