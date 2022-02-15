#include <iostream>
using namespace std;
int main()
{
    int n, sum;
    n = sum = 0;
    // cout << "Enter number : ";
    n = -1;
    while (n <= -1)
    {
        cout << "Enter positive number to close : ";
        cin >> n;
        sum = sum + n;
    }
    cout << "Total sum is : " << sum;
}