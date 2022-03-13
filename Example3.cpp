#include <iostream>
using namespace std;
/*Write a Program that display total number of “Red” cars in carriage as shown in
Figure-1 without using loop*/
int main()
{
    const int length = 5;
    int cars[length][length] = {{10, 7, 12, 10, 4}, {18, 11, 15, 17, 2}, {23, 19, 12, 16, 14}, {7, 12, 16, 0, 2}, {3, 5, 6, 2, 1}};
    int result;
    for (int x = 0; x < length; x++)
    {
        for (int y = 0; y < length; y++)
        {
            result = cars[0][0] + cars[1][0] + cars[2][0] + cars[3][0] + cars[4][0];
        }
    }
    cout << "Total Red Cars : " << result;
}