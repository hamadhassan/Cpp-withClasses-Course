#include <iostream>
using namespace std;
int main()
{
    /*Write a C++ program that takes the length of a rectangular fence in feet from the user and the width of
     the fence in feet and then outputs its area on the screen.*/
    int length, width;
    cout << "Enter the length in feets:";
    cin >> length;
    cout << "Enter the width in feets:";
    cin >> width;
    length = length * width;
    cout << "The area of rectangular is:" << length << "(feet^2)";
}