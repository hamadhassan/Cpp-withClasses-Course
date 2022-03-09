#include <iostream>
using namespace std;
int main()
{
    const int LENGTH = 21;
    char message[LENGTH];
    cout << "Enter a sentence on the line below." << endl;
    cin.getline(message, LENGTH, '\n');
    cout << message << endl;
}