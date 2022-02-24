#include <iostream>
using namespace std;
string word;
void storeValue();
bool checkCondition();
/* Write a C++ program that is given a string as input, it displays
true if its length is even and false if the length is odd.*/
int main()
{
    storeValue();
    bool op = checkCondition();
    if (op == true)
    {
        cout << "Yes, Even";
    }
    else
    {
        cout << "No, Odd";
    }
}
void storeValue()
{
    cout << "Enter a word : ";
    cin >> word;
}
bool checkCondition()
{
    int count = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        count += 1;
    }
    if (count % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}