#include <iostream>
#include <Windows.h>
using namespace std;
bool solution(string inputString);
// Given the string, check if it is a palindrome
int main()
{
    cout << solution("aabaa");
}
bool solution(string inputString)
{
    string newWord;
    int length = inputString.length();
    for (int i = length - 1; i >= 0; i--)
    {
        newWord += inputString[i];
    }
    if (newWord == inputString)
    {
        return true;
    }
    return false;
}