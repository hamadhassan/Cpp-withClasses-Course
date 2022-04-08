#include <iostream>
using namespace std;
bool input(string inputString)
{
    string newWord = "";
    if (inputString.length() >= 1 && inputString.length() <= 5)
    {
        int length = inputString.length();
        for (int i = length - 1; i >= 0; i--)
        {
            newWord += inputString[i];
        }
        if (newWord == inputString)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    cout << "Output: " << input("hlbeeykoqqqqokyeeblh");
}
