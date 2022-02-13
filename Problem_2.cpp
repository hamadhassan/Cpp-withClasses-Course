#include <iostream>
using namespace std;
// prototype
int dots(int number);
int main()
{
    int sum, num;
    sum = 0;
    cout << "Enter the triangle : ";
    cin >> num;
    sum = dots(num);
    cout << "Total triangle is : " << sum;
}
// deceleration
int dots(int number)
{
    int sum = 0;
    for (int n = 1; n <= number; n++)
    {
        sum = sum + n;
    }
    return sum;
}