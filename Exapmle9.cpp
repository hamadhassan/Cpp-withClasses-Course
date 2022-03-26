#include <iostream>
using namespace std;
int arry[3][3] = {{1, 2, 3}, {1, 5, 3}, {1, 2, 3}};
bool checkRows(int arry1[], int arry2[]);
bool checkRows2(int row1, int row2);
int main()
{
    // cout << checkRows(arry[0], arry[1]);
    cout << checkRows2(0, 1);
}
bool checkRows(int arry1[], int arry2[])
{
    int count = 0;
    for (int x = 0; x < 3; x++)
    {
        if (arry1[x] == arry2[x])
        {
            count++;
        }
    }
    if (count == 3)
    {
        return true;
    }
    return false;
}
bool checkRows2(int row1, int row2)
{
    int count = 0;
    for (int x = 0; x < 3; x++)
    {
        if (arry[row1][x] == arry[row2][x])
        {

            count++;
        }
        //cout << arry[row1][x] << "\t" << arry[row2][x] << endl;
    }
    if (count == 3)
    {
        return true;
    }
    else
    {

        return false;
    }
}
