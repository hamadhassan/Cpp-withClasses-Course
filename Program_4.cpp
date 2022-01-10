#include <iostream>
using namespace std;
int main()
{
    int n, num1;
    cout << "Enter the number:";
    cin >> n;
    n = (n * (n + 1) / 2);
    /*n=n+1;
    n=n*n;
    n=n/2;*/
    cout << "The sim of all the number is:" << n;
}