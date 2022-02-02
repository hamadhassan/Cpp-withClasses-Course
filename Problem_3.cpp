#include <iostream>
using namespace std;
int main()
{
    /* Jack is a teacher who needs a program that helps him to compile 8th class results. He has five subjects
    (English, Maths, Chemistry, Social Science, and Biology) marked in detail. Program asks the user to enter
    five subjects' marks, including student name and displays the total marks, percentage, grade (by
    percentage), and student name. Every subject has a total of 100 marks. Grading policy details are
    mentioned below*/
    // Variable Deceleration
    string name, garde;
    float english, maths, chemistry, social_Science, biology, total, per;
    //Input from user
    cout << "Student Name : ";
    cin >> name;
    cout << "Enter English Marks : ";
    cin >> english;
    cout << "Enter Maths Marks : ";
    cin >> maths;
    cout << "Enter Chemistry Marks : ";
    cin >> chemistry;
    cout << "Enter Social Science Marks : ";
    cin >> social_Science;
    cout << "Enter Biology Marks : ";
    cin >> biology;
    // calculations
    total = english + maths + chemistry + social_Science + biology;
    per = (total * 100) / 500;
    // conditions
    if (per >= 90 && per <= 100)
    {
        garde = "A+";
    }
    else if (per >= 80 && per < 90)
    {
        garde = "A";
    }
    else if (per >= 70 && per < 80)
    {
        garde = "B+";
    }
    else if (per >= 60 && per < 70)
    {
        garde = "B";
    }
    else if (per >= 50 && per < 60)
    {
        garde = "C";
    }
    else if (per >= 40 && per < 50)
    {
        garde = "D";
    }
    else if (per < 40)
    {
        garde = "F";
    }
    // output
    cout << "----------------------------" << endl;
    cout << "Student name:" << name << endl;
    cout << "Obtain total marks:" << total << endl;
    cout << "Obtain percentage:" << per << "%" << endl;
    cout << "Obtain garde:" << garde << endl;
}