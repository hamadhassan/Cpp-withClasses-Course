#include <iostream>
using namespace std;
/*Write program that change the position of color with position of car’s company of
Figure-1 , output should be as given below*/
const int length = 5;
int cars[length][length] = {{10, 7, 12, 10, 4}, {18, 11, 15, 17, 2}, {23, 19, 12, 16, 14}, {7, 12, 16, 0, 2}, {3, 5, 6, 2, 1}};
int main()
{
    int result = 0;
    cars[4][2] = {14};
    for (int x = 0; x < length; x++)
    {
        for (int y = 0; y < length; y++)
        {
            cout << cars[x][y] << "\t";
        }
        cout << endl;
    }
    cout << "Total Cars : " << result;
}
