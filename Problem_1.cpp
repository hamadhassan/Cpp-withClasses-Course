#include <iostream>
using namespace std;
int cars[5][5] = {{1, 2, 3, 4, 5}, {1, 3, 5, 6, 7}, {1, 5, 7, 9, 2}, {1, 4, 2, 4, 3}, {1, 2, 4, 5, 6}};
int main()
{
    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            cout << cars[x][y] << "\t";
        }
        cout << endl;
    }
}