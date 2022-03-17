#include <iostream>
using namespace std;
/*Write a program that calculates total number of cars of Figure-1 using function that
return sum of total cars.*/
const int length = 5;
int cars[length][length] = {{10, 7, 12, 10, 4}, {18, 11, 15, 17, 2}, {23, 19, 12, 16, 14}, {7, 12, 16, 0, 2}, {3, 5, 6, 2, 1}};
int main()
{
    int result = 0;
    for (int x = 0; x < length; x++)
    {
        for (int y = 0; y < length; y++)
        {
            result += cars[x][y];
        }
    }
    cout << "Total Cars : " << result;
}
