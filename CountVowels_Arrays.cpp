#include <iostream>
using namespace std;
int main()
{
    string word = " ";
    int count_vowels = 0;
    cout << "Enter a word : ";
    cin >> word;
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
        {
            count_vowels += 1;
        }
    }
    cout << "There are " << count_vowels << " vowels in the " << word;
}