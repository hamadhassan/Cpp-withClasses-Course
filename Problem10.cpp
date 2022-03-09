#include <iostream>
using namespace std;
int main()
{
    const int LENGTH = 21;
    char message[LENGTH];
    int i;
    cout << "Enter a sentence on the line below." << endl;
    cin.get(message[0]);;
    i = 0;
    while (i < LENGTH - 1 && message[i] != '\n')
    {
        i;
        cin.get(message[i]);
    }
    message[i] = '\0'; // Replace '\n' if that was read.
    // Otherwise replace the last character read.
    cout << message << endl;
}