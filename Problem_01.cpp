#include <iostream>
using namespace std;
const int length = 1000;
char ar_letter[length];
void storeLetter(int length);
int calulation(char letter, int length);
int main()
{
    int ar_length; // store user enter array length
    char letter;   // store letter want to count
    int count;     // store function result and display the count
    cout << "How many letter you will enter: ";
    cin >> ar_length;
    storeLetter(ar_length);

    cout << "Enter the letter you want to count: ";
    cin >> letter;
    count = calulation(letter, ar_length);
    cout << "letter count is " << count;
}
void storeLetter(int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << "Enter letter : ";
        cin >> ar_letter[i];
    }
}
int calulation(char letter, int length)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (ar_letter[i] == letter)
        {
            count = count + 1;
        }
    }
    return count;
}
