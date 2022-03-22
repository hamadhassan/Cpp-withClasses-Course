#include <iostream>
using namespace std;
int ary[3][3] = {{1, 2, 1},
                 {5, 2, 5},
                 {1, 2, 5}};
bool checkColumRow();
int main()
{
    cout << checkColumRow();
}
bool checkColumRow()
{
    int count = 0, i = 0, ii = 0;

    while (i != 3)
    {
        for (int x = 0; x < 3; x++)
        {
            if (ary[i][x] == ary[x][i])
            {
                count++;
            }
            cout << ary[i][x] << "\t" << ary[x][i] << endl;
            if (count == 3)
            {
                return true;
            }
        }
        cout << "-------------------" << endl;
        i++;
        count = 0;
    }

    return false;
}
