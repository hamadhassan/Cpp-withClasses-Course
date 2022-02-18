#include <iostream>
//#include <stdio.h>
#include <conio.h>

using namespace std;
int main()
{
    char sentence[100];
    cout << "Enter a sentence : ";
    gets(sentence); // store enter sentence
    // sentence[0] = toupper(sentence[0]); // for one letter captial
    int i; // increment number
    for (i = 0; sentence[i] != '\0'; i++)
    {
        if (i == 0) // first letter print
        {
            sentence[i] = toupper(sentence[i]); // use
        }
        else if (sentence[i - 1] == ' ') // each letter after space
        {
            sentence[i] = toupper(sentence[i]);
        }
    }
    cout << sentence;
}