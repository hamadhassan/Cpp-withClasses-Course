#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    /*
    The angle of elevation from a point 43 feet from the base of a tree on level ground to the
    top of the tree is 30° (30 degree). Write a C++ program to calculate the height of the tree?*/
    double angle_degree, base, deg_rad, height; // angle in the degree , base of triangle , convert degree into radian, height
    cout << "Enter the angle of elevation : ";
    cin >> angle_degree;
    cout << "Enter the base of a tree : ";
    cin >> base;
    // convert degree into radian
    deg_rad = angle_degree / 57.2958;
    height = tan(deg_rad) * base;
    // Height 
    cout << "The height is : " << height;
}
