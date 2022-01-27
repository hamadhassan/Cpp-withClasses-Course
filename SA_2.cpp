#include<iostream>
using namespace std;
int main()
{
float cel,fah;
cout << "Enter temperature fahrenheit: ";
cin>> fah;
cel=5/9*(fah-32);
if(cel>=40)
{
cout << "Its hot today";
}
else 
{
cout << "Nice weather";
}
cout <<endl<< "Program End";
}