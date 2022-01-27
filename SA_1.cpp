#include<iostream>
using namespace std;
int main()
{
float gram,kg;
cout << "Enter the grams : ";
cin>> gram;
if(gram<0)
{
cout << "You enter a wrong number";
}
else 
{
kg=(gram/1000);
cout <<gram<< " grams equal to "<< kg<< " kilograms.";
}
cout <<endl<< "Program End";
}