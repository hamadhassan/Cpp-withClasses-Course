#include <iostream>
using namespace std;
/*Write a program that takes 5 numbers in the array from
user and find the largest of these numbers.*/
int main()
{
    int number[5];
    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a number : ";
        cin >> number[i];

        if (max < number[i])
        {
            max = number[i];
        }
    }
    cout << "Maximum number is : " << max;
}