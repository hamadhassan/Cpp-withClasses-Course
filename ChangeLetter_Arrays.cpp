#include <iostream>
using namespace std;
int ASCII(int value);

int main()
{
    string word = " ";  // take user input
    int rem;            // add one digit in ASCILL  to obtained next letter
    char char_obtained; // convert ASCII number into letter
    cout << "Enter the word : ";
    cin >> word;
    for (int i = 0; word[i] != '\0'; i++)
    {
        rem = ASCII(word[i]); // assign char data type to int to get those number in ASCII
        if (rem == 122)
        {
            rem = 122 - 25; // if letter is z=122 then it convert into a=97
        }
        else if (rem == 90)
        {
            rem = 90 - 25; // if letter is Z=90 then it convert into A=65
        }
        else
        {
            // add 1 in ASCII to obtained next number
            rem += 1;
        }
        char_obtained = rem; // now convert ASCII intger to again char
        cout << char_obtained; // print each char 
    }

} // end of main

int ASCII(int value)
{
    int ASCII = value;
    return ASCII;
} // end of ASCII