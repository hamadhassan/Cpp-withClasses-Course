#include <iostream>
using namespace std;
void validate();
int main()
{
    validate();
}
void validate()
{
    int value;
    cout << "Enter a number ";
    cin >> value;
    value = 0;
    while (value < 0)
    {
        cout << "Error: " << value << " is not a Positive Number." << endl;
        cout << "Please enter a Positive Number: ";
        cin >> value;
    }
}