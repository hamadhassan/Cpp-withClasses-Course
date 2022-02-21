#include <iostream>
using namespace std;
/*Write a program that take a word and also take letter,
if letter is find in word print fount else not found */
int main()
{
    string word = " ";
    char letter = ' ';
    bool isfound = false; // flag variable
    cout << "Enter a word : ";
    cin >> word;
    cout << "Enter a letter : ";
    cin >> letter;
    for (int i = 0; word != "\0"; i++)
    {
        if (word[i] == letter)
        {
            isfound = true;
            break;
        }
    }
    if (isfound == true)
    {
        cout << "Letter is found in given word ";
    }
    else
    {
        cout << "Letter is not found in given word ";
    }
}