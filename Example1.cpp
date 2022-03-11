#include <iostream>
using namespace std;
/*Write a program that initialize matrix named as cars mentioned in Figure-1 and 
display values.*/
int main()
{
    const int length = 5;
    int cars[length][length] = {{10, 7, 12, 10, 4}, {18, 11, 15, 17, 2}, {23, 19, 12, 16, 14}, {7, 12, 16, 0, 2}, {3, 5, 6, 2, 1}};
    for (int x = 0; x < length; x++)
    {
        for (int y = 0; y < length; y++)
        {
             cout << cars[x][y] << "\t";
        }
        cout << endl;
    }
}