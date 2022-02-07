#include <iostream>
using namespace std;
// Function prototype or deceleration
double pyramidVolume(float lenght, float width, float hight, string unit);
// Main Function
int main()
{
    /*Create a function that takes the length, width, height (in meters) and output unit in which you want to
    see the answer and returns the volume of a pyramid in the correct unit.
    Notes:
    ● The units used are limited to: millimeters, centimeters, meters and kilometers.
    ● Ensure you return the answer and add the correct unit in the format cubic <unit>.
    Test Cases:
    ● pyramidVolume(4, 6, 20, "centimeters") ➞ "160000000.000 cubic centimeters"
    ● pyramidVolume(1843, 1823, 923, "kilometers") ➞ "1.034 cubic kilometers"
    ● pyramidVolume(18, 412, 93, "millimeters") ➞ "229896000000000.000 cubic millimeters"*/
    
    float lenght, width, hight;
    double result;
    string unit;
    cout << "Enter the lenght : ";
    cin >> lenght;
    cout << "Enter the width  : ";
    cin >> width;
    cout << "Enter the hight  : ";
    cin >> hight;
    cout << "Enter the unit   : ";
    cin >> unit;
    result = pyramidVolume(lenght, width, hight, unit);
    unit = "cubic " + unit;
    cout << result << unit;
    // function called
}
// Function definition
double pyramidVolume(float lenght, float width, float hight, string unit)
{ // function body
    double result;
    // pyramid formaula (l*w*h)/3 meter unit
    if (unit == "millimeters")
    {
        lenght = lenght * 1000;
        width = width * 1000;
        hight = hight * 1000;
    }
    else if (unit == "centimeters")
    {
        lenght = lenght * 100;
        width = width * 100;
        hight = hight * 100;
    }
    else if (unit == "meters")
    {
        lenght = lenght * 100;
        width = width * 100;
        hight = hight * 100;
    }
    else if (unit == "kilometers")
    {
        lenght = lenght * 0.001;
        width = width * 0.001;
        hight = hight * 0.001;
    }
    else
    {
        cout << "Invalid option.";
    }
    result = (lenght * width * hight) / 3;
    return result;
}
