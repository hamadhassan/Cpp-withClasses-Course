#include <iostream>
using namespace std;
int arry[3][3] = {{1, 1, 3},
                  {2, 2, 3},
                  {1, 1, 3}};
bool checkColumn(int colum1, int colum2);
int main()
{
    cout << checkColumn(0, 1);
}
bool checkColumn(int colum1, int colum2)
{
    int count = 0;
    for (int y = 0; y < 3; y++)
    {
        if (arry[y][colum1] == arry[y][colum2])
        {
            count++;
        }
             cout << arry[y][colum1] << "\t" << arry[y][colum2] << endl;
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
