#include <iostream>
using namespace std;
// prototype
int totaldigit(int number, int digit);

int main()
{
    int number, digit, total;
    cout << "Enter the number  : ";
    cin >> number;
    cout << "Enter the digit  : ";
    cin >> digit;
    total = totaldigit(number, digit); // function call
    cout << "Total digits are : " << total;
}
// function definition
int totaldigit(int number, int digit)
{
    int cout = 0;
    for (int i = number; i != 0; i = i / 10) // divider drop the last digit 
    {
        if (i % 10 == digit)// modulus give the last digit 
        {
            cout++;
        }
    }
    return cout;
}
