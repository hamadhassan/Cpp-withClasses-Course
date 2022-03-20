#include <iostream>
using namespace std;
int arry[3][3] = {{1, 3, 3},
                  {2, 2, 3},
                  {3, 2, 3}};
bool checkRowColumn(int column);
int main()
{
    int row, column;

    cout << "Enter Column : ";
    cin >> column;
    cout << checkRowColumn(column - 1);
}
bool checkRowColumn(int column)
{
    int count = 0;
    int i = 0;
    while (i != 3)
    {
        for (int x = 0; x < 3; x++)
        {
            if (arry[i][x] == arry[x][column])
            {
                count++;
            }
            cout << arry[i][x] << "\t" << arry[x][column] << endl;
            if (count == 3)
            {
                return true;
            }
        }
        count = 0;
        i++;
    }

    return false;
}
