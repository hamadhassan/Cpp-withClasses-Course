#include <iostream>
using namespace std;
/*Write a program that pass color as parameter into function named as “converter”
and return index of that column and sum total number of cars of that color availbe.*/
const int length = 5;
int cars[length][length] = {{10, 7, 12, 10, 4}, {18, 11, 15, 17, 2}, {23, 19, 12, 16, 14}, {7, 12, 16, 0, 2}, {3, 5, 6, 2, 1}};
int Converter(string color);
int main()
{
    string color;
    int colorCode;
    int result = 0;
    cout << "Enter Color of Car : ";
    cin >> color;
    colorCode = Converter(color);
    for (int i = 0; i < length; i++)
    {
        result += cars[i][colorCode];
    }
    cout << "Total  Cars : " << result;
}
int Converter(string color)
{ // 1-Red, 2-Balck, 3-Brown, 4-Blue, 5-Gray)
    if (color == "Red")
    {
        return 0;
    }
    else if (color == "Black")
    {
        return 1;
    }
    else if (color == "Brown")
    {
        return 2;
    }
    else if (color == "Blue")
    {
        return 3;
    }
    else if (color == "Gray")
    {
        return 4;
    }
    return 5;
}