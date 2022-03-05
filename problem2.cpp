#include <iostream>
//#include <conio.h>
#include <fstream>
using namespace std;
int main()
{
    string distance;
    string time;
    string speed;
    fstream newFile;
    newFile.open("problem1_data.txt", ios::in);
    getline(newFile, distance);
    getline(newFile, time);
    getline(newFile, speed);
    newFile.close();
    cout << distance << endl;
    cout << time << endl;
    cout << speed << endl;
}