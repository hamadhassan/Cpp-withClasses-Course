#include <iostream>
using namespace std;
int main()
{
    /* Write a C++ program to print the appropriate activity depending on the variable temperature and humidity
    value. The table below assumes that the temperature can only be warm and cold, and the humidity can
    only be dry and humid.*/

    // Variable Deceleration
    string temp, hum; //string data type varibale temperature, humidity
    temp = hum = "";  // variable Inilizationa
    cout << "Enter the temperatur: ";
    cin >> temp;
    cout << "Enter the humidity:";
    cin >> hum;
    // Conditions
    if (temp == "warm" && hum == "dry")
    {
        cout << "Play Tennis";
    }
    else if (temp == "warm" && hum == "humid")
    {
        cout << "Swim";
    }
    else if (temp == "cold" && hum == "dry")
    {
        cout << "Play basketball";
    }
    else if (temp == "cold" && hum == "humid")
    {
        cout << "Watch tv";
    }
}