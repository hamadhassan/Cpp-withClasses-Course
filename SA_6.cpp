#include <iostream>
using namespace std;
int main()
{
    string name;
    name = "END";
    while (name == "END")
    {
        cout << "Hello, Enter your name and type END to close : ";
        cin >> name;
    }
    cout << name;
}