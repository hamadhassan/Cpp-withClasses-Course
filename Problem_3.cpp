#include<iostream>
using namespace std;
int main()
{
int n;
cout<< "Enter a number : ";
cin>> n;
if(n>=200)
{
int n1,n2,n3,n4,add,sub;
cout<<"Enter first number : ";
cin>>n1;
cout<<"Enter second number : ";
cin>>n2;
cout<<"Enter third number : ";
cin>>n3;
cout<<"Enter fourth number : ";
cin>>n4;
add=n1+n2;
sub=n3-n4;
cout<<"The addition of first two number is : "<< add<<endl;;
cout<<"The Subtraction of third and fourth number is : "<<sub<<endl;
}
cout<<"Program End";
}