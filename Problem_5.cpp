#include <iostream>
using namespace std;
int main()
{
    /*Write a program that calculates and prints the bill for a cellular telephone company. The company offers
    two types of service: regular and premium. Its rates vary, depending on the type of service. The rates are
    computed as follows:
    Regular service: $10.00 plus first 50 minutes are free. Charges for over 50 minutes are $0.20
    per minute.
    Premium service: $25.00 plus:
    ● For calls made during the day., the first 75 minutes are free; charges for more than 75 minutes are
    $0.10 per minute.
    ● For calls made during the night, the first 100 minutes are free; charges for more than 100 minutes
    are $0.05 per minute.
    Your program should prompt the user to enter a service code (type char), and the number of minutes the
    service was used.
    A service code of r or R means regular service; a service code of p or P
    means premium service. Treat any other character as an error. Your program
    should output the type of service, the number of minutes the telephone service was used, and the
    amount due from the user.
    For the premium service, the customer may be using the service during the
    day and the night(d or D for day and n or N for night). Therefore, to calculate the bill, you must
    ask the user to input the number of minutes the service was used during the day and the number
    of minutes the service was used during the night. */

    float minutes, overtime, charges;
    char type, subType; // type means regular or perimum user, sub type means day or night user
    cout << "Enter which type of pakage you used (Press R for regular and P for premium)...";
    cin >> type;
    cout << "Enter the minutes you used :";
    cin>>minutes;
    //conditions 
    if (type == 'R' || type == 'r')
    {
        if (minutes > 50)
        {
            overtime = minutes - 50;
            charges = overtime * 0.20;
            charges = charges + 50;
        }
        else
        {
            charges = 50;
        }
    }
    else if (type == 'P' || type == 'p')
    {
        cout << "Enter service using time (Press D for Day and N for Night)...";
        cin >> subType;
        if (subType == 'D' || subType == 'd')
        {
            overtime = minutes - 75;
            charges = overtime * 0.10;
            charges = charges + 75;
        }
        else
        {
            charges = 75;
        }

        if (subType == 'N' || subType == 'n')
        {
            overtime = minutes - 100;
            charges = overtime * 0.05;
            charges = charges + 100;
        }
        else
        {
            charges = 100;
        }
    }
    else
    {
        cout << "Wrong input";
    }
    // Output 
    cout << "--------------------------------------------" << endl;
    cout << "The Service Charges is : " << charges;
}