#include <iostream>
using namespace std;
int main()
{
    /*A toy car accelerates from initial velocity to final velocity in some time. You have to write the C++
    program for calculating the Final Velocity. Take initial velocity, acceleration and time as input from the
    user and calculate the final velocity of the car and display on the screen.*/
    int initial, final, time;
    cout << "Enter the initial velocity:";
    cin >> initial;
    cout << "Enter the final velocity:";
    cin >> final;
    cout << "Enter the time taken:";
    cin >> time;
    final = (final - initial) / time;
    cout << "The acceleration is:" << final << " meter square per second";
}