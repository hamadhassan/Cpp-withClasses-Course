#include <iostream>
using namespace std;
int main()
/*Write a C++ Program that asks the user to enter 5
numbers, one at a time, and add them together. This
is called a Running Total. Once the user is done,
display the total sum on the Console.*/
{
    int num, sum; // variable deceleration
    num = sum = 0;
    // for looop
    /*for (int n = 0; n < 5; n++)
    {
        system("cls"); // clear screen
        cout << "Enter a number : ";
        cin >> num;
        sum = sum + num;
    }
    cout << "Sum of five number is : " << sum;*/
    // same question solved with while loop
    int n;
    n = 0; // intilization
    while (n < 5)
    {
        system("cls"); // clear screen
        cout << "Enter a number : ";
        cin >> num;
        sum = sum + num;
        n += 1; // increment operator
    }
    cout << "Sum of five number is : " << sum;
}