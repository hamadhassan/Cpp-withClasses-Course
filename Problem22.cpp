#include <iostream>
using namespace std;
int g_c_d(int a, int b);
int main()
{
    cout << g_c_d(40, 50) << endl;
}
int g_c_d(int a, int b)
{
    if (a <= 0 || b <= 0) // a parameter is not positive
    {
        return 0;
    } // exit and return the error sentinel
    int trial_divisor;
    if (a <= b)
    {
        trial_divisor = a;
    }
    else
    {
        trial_divisor = b;
    }
    while (a % trial_divisor != 0 || b % trial_divisor != 0)
    {
        --trial_divisor;
    }
    return trial_divisor;
}