#include <iostream>
using namespace std;
/*Write a Program that display total number of “Nissan” cars in carriage as shown in
Figure-1 using loop.*/
int main()
{
    const int length = 5;
    int cars[length][length] = {{10, 7, 12, 10, 4}, {18, 11, 15, 17, 2}, {23, 19, 12, 16, 14}, {7, 12, 16, 0, 2}, {3, 5, 6, 2, 1}};
    int result=0;
    for (int i = 0; i < length; i++)
    {
        result += cars[2][i];
    }
    cout << "Total Nissan Cars : " << result;
}