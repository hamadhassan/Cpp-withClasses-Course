#include <iostream>
using namespace std;
// prototype
void number();

int main()
{
    number(); // function call
}
// function decleration
void number()
{
    for (int i = 1; i <= 100; i++)
    {
        cout << endl
             << i;
    }
}