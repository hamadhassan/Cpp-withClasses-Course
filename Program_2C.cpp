#include<iostream>
using namespace std;
int main()
{
int num1,num2,Sum1,Sum2;
cout << "Enter first number:";
cin>> num1;
cout << "Enter second number:";
cin>> num2;
cout<<"The multiples of first number are:"<< num1<< " "<< num1+num1 << " "<< num1+num1+num1<<" "<<num1+num1+num1+num1<<" "<< num1+num1+num1+num1+num1;
cout<<endl<<"The multiples of second number are:"<< num2<< " "<< num2+num2 << " "<< num2+num2+num2<<" "<<num2+num2+num2+num2<<" "<< num2+num2+num2+num2+num2;
Sum1=(num1)+(num1+num1)+(num1+num1+num1)+(num1+num1+num1+num1)+(num1+num1+num1+num1+num1);
Sum2=(num2)+(num2+num2)+(num2+num2+num2)+(num2+num2+num2+num2)+(num2+num2+num2+num2+num2);
Sum1=Sum1+Sum2;
cout<< endl<<"The sum of the two multiples is:"<< Sum1;
}