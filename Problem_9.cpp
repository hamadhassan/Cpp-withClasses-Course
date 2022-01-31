#include <iostream>
using namespace std;
int main()
{
    /* The figure consists of 6 blocks with size h * h, placed as in the figure below. The lower left angle
    of the building is at position {0, 0}. The upper right angle of the figure is on position {2*h, 4*h}.
    The coordinates given in the figure are for h = 2:
    Write a program that enters an integer h and the coordinates of a given point {x, y} (integers) and
    prints whether the point is inside the figure (inside), outside of the figure (outside) or on any of
    the borders of the figure (border).*/

    // In this case h is constant at 2
    int h, x, y; // h for distance between cell, x for x-axis and y for y-axis
    string point;
    cout << "Enter distance between x and y axis : ";
    cin >> h;
    cout << "Enter x-coordinate : ";
    cin >> x;
    cout << "Enter y-coordinate : ";
    cin >> y;
    // for block between x-axis 6 and y-axis 2;
    if (x <= 6 && y <= 2)
    {
        if (x % 2 == 0 && y % 2 == 0)
        {
            point = "Border";
        }
        else if (x % 2 != 0 || y % 2 != 0)
        {
            point = "Inside";
        }
    }
    // for block between x-axis 2-4 ans y-axis 2-8
    else if ((x >= 2 && x <= 4) && (y > 2 && y <= 8))
    {
        if (x % 2 == 0)
        {
            point = "Border";
        }
        else
        {
            point = "Inside";
        }
    }
    else if ((x >= 0 && x < 2) && (y > 2 && y <= 8) || (x > 4 && x <= 6) && (y > 2 && y <= 8))
    {
        point = "Outside";
    }
    // If a number greater then (6,8)
    else
    {
        point = "Outside";
    }

    cout << "The point will lies in : " << point;
}
