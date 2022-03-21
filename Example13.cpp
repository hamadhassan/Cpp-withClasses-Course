#include <iostream>
using namespace std;
int ary[3][3] = {{1, 2, 3},
                 {2, 2, 1},
                 {3, 3, 1}};
bool checkColumRow(int row);
int main()
{
    cout << checkColumRow(0);
   

}
bool checkColumRow(int row)
{
    int count = 0, i = 0;
    while (i != 3)
    {
        for (int x = 0; x < 3; x++)
        {
            if (ary[row][x] == ary[x][i])
            {
                count++;
            }
            cout << ary[row][x] << "\t" << ary[x][i] << endl;
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
