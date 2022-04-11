#include <iostream>
#include <Windows.h>
using namespace std;
int solution(int year);
/*Given a year, return the century it is in. The first century spans from the year 1 up to and including the year 100, the second - from the year 101 up to and including the year 200, etc.*/
int main()
{
    cout << solution(1905);
}
int solution(int year)
{
    int hundered = year / 100;
    if (year / 100.0 == hundered)
    {
        return hundered;
    }
    else
    {
        return hundered + 1;
    }
}