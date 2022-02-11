#include <iostream>
using namespace std;
// prototype
int totaldigit(int num);

int main()
{
    int digit, total;
    cout << "Enter the digits : ";
    cin >> digit;
    total = totaldigit(digit);// function call 
    cout << "Total digits are : " << total;
}
// function definition
int totaldigit(int num)
{
    int cout = 0;
    for (int i = num; i != 0; i = i / 10)
    {
        cout++;
    }
    return cout;
}
