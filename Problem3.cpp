#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
int main()
{
    int distance, time, speed;
    cout << "Enter the distance : ";
    cin >> distance;
    cout << "Enter the time : ";
    cin >> time;
    speed = distance / time;
    cout << "Speed is : " << speed;
    fstream write;
    write.open("problem3_data.txt", ios::out);
    write << "Distance is : " << distance << "\n";
    write << "Time is : " << time << "\n";
    write << "Speed is : " << speed << "\n";
    write.close();
    string distance1, time1, speed1;
    fstream read;
    read.open("problem3_data.txt", ios::in);
    getline(read,distance1);
    getline(read,time1);
    getline(read,speed1);
    read.close();
    cout<<endl;
    cout << distance1 << endl;
    cout << time1 << endl;
    cout << speed1 << endl;
}