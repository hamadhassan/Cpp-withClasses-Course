#include <iostream>
using namespace std;
int main()
{
    int number[10];
    int i;
    int max = 0;
    for (i = 0; i < 10; i++)
    {
        cout << "Enter a number: ";
        cin >> number[i];
        if (max < number[i])
        {
            max = number[i];
        }
    }
    cout << max;
}