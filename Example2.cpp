#include <iostream>
using namespace std;
/*Write a program that initialize of cars as shown in Figure-1 and display the number 
of Toyota Blue cars available in carriage*/
int main()
{
    const int length = 5;
    int cars[length][length] = {{10, 7, 12, 10, 4}, {18, 11, 15, 17, 2}, {23, 19, 12, 16, 14}, {7, 12, 16, 0, 2}, {3, 5, 6, 2, 1}};
    int result;
    for (int x = 0; x < length; x++)
    {
        for (int y = 0; y < length; y++)
        {
            result = cars[1][3];
        }
    }
    cout << "Toyota Blue Cars : " << result;
}