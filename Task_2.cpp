#include<iostream>
using namespace std;
int main()
{
string name;
float sal,per,mon,totalsal,buy;
int rem;
cout << "Enter your name : ";
cin>> name;
cout << "Enter your salary : ";
cin>> sal;
cout << "Enter the number of month you take advance salary : ";
cin>> mon;
cout << "Enter the percentage of advanced salary : ";
cin>> per;
cout << "Enter price of thing you want to buy: ";
cin>> buy;
cout << "------------------------------------------------------"<<endl;
per=per/100;
totalsal=sal*mon;
totalsal=totalsal*per;
sal=sal*per;
if(totalsal==buy)
{
cout <<"You can buy this product easily."<<endl;
}
else 
{
cout << "You can not buy this product."<<endl;
rem=buy-totalsal;
rem=rem/sal;

cout << "You required "<< rem << " months more advance salary."<<endl;
cout << rem+mon<< " months required for buying this product."<<endl;


}
cout << "Program End.";
}