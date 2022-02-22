#include <iostream>
using namespace std;
string word;
void storeValue();
bool checkCondition();
/* */
int main()
{
    storeValue();
    bool op = checkCondition();
    if (op == true)
    {
        cout << "Yes, true";
    }
    else
    {
        cout << "No, false";
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
    int i;
    for (i = 0; word[i] != '\0'; i++)
    {
        count += 1;
    }
    if (word[i - 1] == 'n')
    {
        return true;
    }
    else
    {
        return false;
    }
}