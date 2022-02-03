#include <iostream>
using namespace std;
int main()
{
    /* Write a program that reads from the console a fruit (banana / apple / …), a day of the week
    (Monday / Tuesday / …) and a quantity (a decimal number) and calculates the price
    according to the prices from the tables above. Print “error” if it is an invalid day of the week or
    an invalid name of a fruit.*/
    string fruitName, day;
    float quntaity, price ;
    cout << "Enter day of week : ";
    cin >> day;
    cout << "Enter fruit name : ";
    cin >> fruitName;
    cout << "Enter the quantity : ";
    cin >> quntaity;
    //conditions
    //Banana
    if(fruitName=="Banana" )
    {
        if (day == "Saturday" || day == "Sunday")
        {
            price = quntaity * 2.70;
        }
        else if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Firday")
        {
            price = quntaity * 2.50;
        }
        else
        {
            cout << "Invalid option...";
        }
    }
    //Apple 
    else if(fruitName=="Apple")
    {
        if (day == "Saturday" || day == "Sunday")
        {
            price = quntaity * 1.25;
        }
        else if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Firday")
        {
            price = quntaity * 1.20;
        }
        else
        {
            cout << "Invalid option...";
        }
    }
    //Orange 
    else if(fruitName=="Orange")
    {
        if (day == "Saturday" || day == "Sunday")
        {
            price = quntaity * 0.90;
        }
        else if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Firday")
        {
            price = quntaity * 0.85;
        }
        else
        {
            cout << "Invalid option...";
        }
    }
    //Grapefruit 
    else if(fruitName=="Grapefruit")
    {
        if (day == "Saturday" || day == "Sunday")
        {
            price = quntaity * 1.60;
        }
        else if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Firday")
        {
            price = quntaity * 1.45;
        }
        else
        {
            cout << "Invalid option...";
        }
    }
    // Kiwi
    else if(fruitName=="Kiwi")
    {
        if (day == "Saturday" || day == "Sunday")
        {
            price = quntaity * 3.00;
        }
        else if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Firday")
        {
            price = quntaity * 2.70;
        }
        else
        {
            cout << "Invalid option...";
        }
    }
    //pineapple
    else if(fruitName=="Pineapple")
    {
        if (day == "Saturday" || day == "Sunday")
        {
            price = quntaity * 5.60;
        }
        else if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Firday")
        {
            price = quntaity * 5.50;
        }
        else
        {
            cout << "Invalid option...";
        }
    }
    //grapes
     else if(fruitName=="Pineapple")
    {
        if (day == "Saturday" || day == "Sunday")
        {
            price = quntaity * 4.20;
        }
        else if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Firday")
        {
            price = quntaity * 3.85;
        }
        else
        {
            cout << "Invalid option...";
        }
    }
    else
    {
        cout << "Invalid option...";
    }
    //Output 
    cout<<"Total price is : "<<price;
}
