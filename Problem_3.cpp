#include <iostream>
using namespace std;

int main()
{
    int days, doctor, patient, trated, un_treated, totalcapacity, totalpatient;
    doctor = 7;
    cout << "Enter the days : ";
    cin >> days;
    for (int n = 1; n <= days; n++)
    {
        cout << "Enter the patients : ";
        cin >> patient;
        if (n % 3 == 0)
        {
            if (un_treated > doctor)
            {
                totalcapacity = doctor + 1;
            }
        }
        int rem = doctor - patient;
        un_treated += rem;
        totalpatient = totalpatient + patient;
    }
}