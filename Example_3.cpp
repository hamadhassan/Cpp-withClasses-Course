#include <iostream>
using namespace std;
// Functio  protype
void fibonacciSeries(int number);
int main()
{
    int num, result;
    cout << "Enter the length of the Fibonacci series.";
    cin >> num;
    fibonacciSeries(num);
}
void fibonacciSeries(int number)
{
    int n1, n2, n3;
    n1 = 0;
    n2 = 1;
    cout << n1 << " ";
    cout << n2 << " ";
    for (int i = 2; i <= number; i++)
    {
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }
}