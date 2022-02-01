#include <iostream>
using namespace std;
int main()
{
    /*A student has to attend an exam at a particular time (for example, at 9:30 am). They arrive in
    the exam room at a particular time of arrival (for example 9:40 am). It is considered that the
    student has arrived on time if they have arrived at the time when the exam starts or up to half
    an hour earlier. If the student has arrived more than 30 minutes earlier, the student has come
    too early. If they have arrived after the time when the exam starts, they are late.
    Write a program that inputs the exam starting time and the time of student's arrival, and prints if the
    student has arrived on time, if they have arrived early or if they are late, as well as how many hours or
    minutes the student is early or late.
    Input Data
    Read the following four integers (one on each line) from the console:
    The first line contains exam starting time (hours) – an integer from 0 to 23.
    ● The second line contains exam starting time (minutes) – an integer from 0 to 59.
    ● The third line contains an hour of arrival – an integer from 0 to 23.
    ● The fourth line contains minutes of arrival – an integer from 0 to 59.
    Output Data
    Print the following on the first line on the console:
    ● "Late", if the student arrives later compared to the exam starting time.
    ● "On time", if the student arrives exactly at the exam starting time or up to 30 minutes earlier.
    ● "Early", if the student arrives more than 30 minutes before the exam's starting time.
    If the student arrives with more than one minute difference compared to the exam starting time, print on
    the next line:
    "mm minutes before the start" for arriving less than an hour earlier.
    ● "hh:mm hours before the start" for arriving 1 hour or earlier. Always print minutes using 2
    digits, for example "1:05".
    ● "mm minutes after the start" for arriving more than an hour late.
    ● "hh:mm hours after the start" for arriving late by 1 hour or more. Always print minutes using 2
    digits, for example, "1:03". */

    int exam_hr, exam_mm, st_hr, st_mm, rem_hr, rem_mm, mm; // Exam Houre , Exam Minute , Student Houre, Student Minutes, remaning hour, remaning minutes, conert hours to minutes
    // Input
    cout << "Exam Starting Time (Hour) : ";
    cin >> exam_hr;
    cout << "Exam Starting Time (Minutes) : ";
    cin >> exam_mm;
    cout << "Student hour of arrival : ";
    cin >> st_hr;
    cout << "Student minutes of arrival : ";
    cin >> st_mm;
    // exam and student time match
    if ((exam_hr == st_hr) && (exam_mm == st_mm))
    {
        cout << "On Time";
    }
    // exam and student time not match different possibility
    else if ((exam_hr != st_hr && exam_mm != st_mm) || (exam_hr == st_hr && exam_mm != st_mm) || (exam_hr != st_hr && exam_mm == st_mm))
    {
        rem_hr = st_hr - exam_hr; // total hour
        rem_mm = st_mm - exam_mm; // total minutes
        if (rem_hr == 0)
        {
            if (rem_mm <= 30)
            {
                cout << "On Time" << endl;
                cout << rem_mm << " minutes after the start.";
            }

            else
            {
                cout << "Late" << endl;
                cout << rem_mm << " minutes before the start.";
            }
        }
        else if (rem_hr >= 0)
        {
            mm = rem_hr * 60;
            mm = rem_mm + mm;
            if (mm > 60)
            {
                cout << "Late" << endl;
                cout << rem_hr << ":" << rem_mm << " after the start.";
            }
            else
            {
                cout << mm << " minutes after the start";
            }
        }
        else if (rem_hr <= 0)
        {

            rem_hr = rem_hr * -1;
            mm = rem_hr * 60;
            rem_mm = rem_mm * -1;
            mm = rem_mm + mm;
            if (mm > 60)
            {
                cout << "Early" << endl;
                cout << rem_hr << ":" << rem_mm << " before the start.";
            }
            else if (mm == 60)
            {
                cout << "Early " << endl;
                cout << rem_hr << ":0 hour before the start.";
            }
            // less then 60
            else
            {

                cout << "One time " << endl;
                cout << mm << " minutes before the start";
            }
        }
    }
}
