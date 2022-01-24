#include<iostream>
using namespace std;
int main()
{
string country;
float price;
cout << "Enter Country name : ";
cin>> country;
cout << "Enter Ticket pice : " ;
cin>> price;
if(country=="ireland")
{
price=price-(price*0.10);
}
else
{
price=price-(price*0.05);
}
cout << "Price after discount is : "<<price<<endl;
cout << "Thanks for using.";

}