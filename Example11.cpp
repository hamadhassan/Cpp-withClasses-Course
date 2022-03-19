#include <iostream>
using namespace std;
int arry[3][3] = {{1, 2, 3},
                  {2, 2, 3},
                  {3, 3, 3}};
bool checkRowColumn(int row, int column);
int main()
{
    int row, column;
    cout << "Enter Row : ";
    cin >> row;
    cout << "Enter Column : ";
    cin >> column;
    cout << checkRowColumn(row-1, column-1);
}
bool checkRowColumn(int row, int column)
{
    int count = 0;
    for (int x = 0; x < 3; x++)
    {
        if (arry[row][x]==arry[x][column])
        {
        count++;
        }
        cout << arry[row][x] << "\t" << arry[x][column];
        cout << endl;
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
