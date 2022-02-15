#include <iostream>
using namespace std;
int main()
{
    int sum;
    sum = 0;
    cout << "Number between 1 to 100" << endl;
    for (int i = 1; i <= 100; i += 1)
    {
        cout << i << endl;
        sum += i;
    }
    cout << "-----------------" << endl;
    cout << "Sum between 1 to 100 is : " << sum;
}