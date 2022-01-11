#include<iostream>
using namespace std;
int main()
{
int num1,num2,s;
float t;
cout << "Enter first number:";
cin>> num1;
cout << "Enter second number:";
cin>> num2;
t=num2-(num1-1);
cout<< t;
//s=t/2*(num1+num2);
cout<<"The Sum of number between "<< num1<<" and "<<num2<< " is:"<< s;
}