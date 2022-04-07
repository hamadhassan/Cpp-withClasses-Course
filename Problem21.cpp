#include <iostream>
using namespace std;
int main()
{
    cout << "Here's a list of the ASCII values of all the upper"
         << " case letters.\n";
    char letter = 'A';
    while (letter <= 'Z')
    {
        cout << letter << " " << int(letter) << endl;
        letter++;
    }
}