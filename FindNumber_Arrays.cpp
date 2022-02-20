#include <iostream>
using namespace std;
/*Let's suppose three numbers are given in array and the
requirement is to find whether the number entered by
the user is present in array or not.*/
int main()
{
    int num[3] = {1, 2, 3}; // array deceleration
    int findnumber;         // the number enter by user
    char isfound = false;   // flag variable
    cout << "Enter a number : ";
    cin >> findnumber;
    for (int n = 1; n < 3; n++)
    {
        if (findnumber == num[n])
        {
            isfound = true;
        }
    }
    if (isfound == true)
    {
        cout << "The number is present in the array";
    }
    else
    {
        cout << "The number is not  present in the array";
    }
}