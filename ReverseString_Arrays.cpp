#include <iostream>
using namespace std;
int main()
{
    char word[5] = {' ', ' ', ' ', ' ', ' ' };
    for (int i = 0; i < 5; i++)
    {
        cin >> word[i];
    }

    for (int i = 5; word[i] != '\0'; i--)
    {
        cout << word[i];
    }
}