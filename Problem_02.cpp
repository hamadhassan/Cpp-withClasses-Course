#include <iostream>
using namespace std;
int const length = 100;
int number[length];
int newNumber[length];
//_____________Prototype______________
void storeNumber(int length);
void miniPeaks(int length);
void dispaly(int length);
int main()
{
    int length;
    cout << "Enter the length : ";
    cin >> length;
    storeNumber(length);
    miniPeaks(length);
    dispaly(length);
}
//_____________definition_________________
void storeNumber(int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << "Enter the number : ";
        cin >> number[i];
    }
}
void miniPeaks(int length)
{

    for (int i = 1; i < length; i++)
    {
        if (number[i] > number[i + 1] && number[i] > number[i - 1])
        {
            newNumber[i - 1] = number[i];
        }
      
    }
}
void dispaly(int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << newNumber[i] << ",";
    }
}