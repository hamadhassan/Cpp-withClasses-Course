#include <iostream>
using namespace std;
int arry1[4] = {1, 2, 3, 4};
int arry2[4] = {1, 2, 0, 4};
bool checkRows();
int main()
{
    cout << checkRows();
}
bool checkRows()
{
    int sum1 = 0;
    int sum2 = 0;
    for (int x = 0; x < 4; x++)
    {
        sum1 += arry1[x];
        sum2 += arry2[x];
    }
    if (sum1 == sum2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
