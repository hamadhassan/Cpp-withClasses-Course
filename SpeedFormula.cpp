#include <iostream>
using namespace std;
int main()
{
    // Speed Calulation Formula
    int d, t, v;
    cout << "Enter the covered distance:";
    cin >> d;
    cout << "Enter the time taken:";
    cin >> t;
    v = d / t;
    cout << "Speed is: " << v;
}