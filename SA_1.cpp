#include <iostream>
using namespace std;
int main()
{
    float average;
    average = 0.0;
    int n, num;
    n = num = 0;
    cout << "Enter the limit of taking number : ";
    cin >> n; // limit of number
    for (int i = 1; i <= n; i += 1)
    {
        cout << "Enter the number : ";
        cin >> num; // store the user input
        num += num;
    }
    average = num / n;
    cout << "The average of " << n << " number is : " << average;
}