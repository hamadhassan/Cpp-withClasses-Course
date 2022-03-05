#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
int main()
{
    int distance, time, speed;
    cout << "Enter the distance : ";
    cin >> distance;
    cout << "Enter the time : ";
    cin >> time;
    speed = distance / time;
    fstream newFile;
    newFile.open("problem1_data.txt", ios::out); // write mode
    newFile << "Distance is : " << distance << "\n";
    newFile << "Time  is : " << time << "\n";
    newFile << "Speed is : " << speed << "\n";
    cout << "Speed is : " << speed;
    newFile.close();
}