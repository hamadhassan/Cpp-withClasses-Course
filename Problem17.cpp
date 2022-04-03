#include <iostream>
using namespace std;
int main()
{
    int n, k = 5;
    n = (100 % k ? k + 1 : k - 1);
    cout << "n = " << n << " k = " << k << endl;
}