#include <iostream>
using namespace std;
int main()
{
    // Take a number from the user and print its reverse number
    int n, n1, n2, n3, n4;
    cout << "Enter the four numbers:";
    cin >> n;
    n1 = n % 10;
    n2 = n / 10;
    n2 = n2 % 10;
    n3 = n / 100;
    n3 = n3 % 10;
    n4 = n / 1000;
    n4 = n4 % 10;
    cout << n1 << n2 << n3 << n4;
}
