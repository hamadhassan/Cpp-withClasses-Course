#include <iostream>
using namespace std;
int cars[5][5] = {{10, 7, 12, 10, 4}, {18, 11, 15, 17, 2}, {23, 19, 12, 16, 14}, {7, 12, 16, 0, 2}, {3, 5, 6, 2, 1}};
;
int main()
{
    int count = 0;
    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            if (cars[x][y] > 15)
            {
                cout << "value=" << cars[x][y] << "\t";
                cout << "x=" << x << "\t"
                     << "y=" << y;
                cout << endl;
                count++;
            }
        }
    }

    cout << count;
}