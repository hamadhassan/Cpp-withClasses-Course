#include <iostream>
using namespace std;
/*Suppose a Cinema displays 5 movies. Price of Each movie
ticket is 500. Write a program in which you have 5 movie
names stored in the array.
For Example
string moveies[5]={Gladiator,StarWars,Terminator,TakingLives,TombRider}
Take 1 movie name as input from the user and if the movie
is stored on an odd index of the array then give 5%
discount on the movie ticket otherwise give 10% discount.*/
int main()
{
    string moveies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    string move_name = " ";
    int ticket_price = 500;   // store ticket price
    float discount = 0;       // store dicount price
    float discount_price = 0; // store discount price after discount
    cout << "Enter move name : ";
    cin >> move_name;
    for (int i = 0; i < 5; i++)
    {
        if (move_name == moveies[i])
        {
            if (i+1 % 2 == 0)
            {
                cout << i << endl;
                discount = ticket_price * 0.10;
                discount_price = ticket_price - discount;
            }
            else
            {
                discount = ticket_price * 0.05;
                discount_price = ticket_price - discount;
            }
        }
    }
    cout << "Move name : " << move_name << endl;
    cout << "Move actual price : " << ticket_price << endl;
    cout << "Discount : " << discount << endl;
    cout << "Discount price : " << discount_price << endl;
}