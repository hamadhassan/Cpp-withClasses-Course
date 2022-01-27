#include<iostream>
using namespace std;
int main()
{
int n;
cout<< "Enter a number : ";
cin>> n;
if(n>=200)
{
int n1,n2,n3,n4,ave;
cout<<"Enter first number : ";
cin>>n1;
cout<<"Enter second number : ";
cin>>n2;
cout<<"Enter third number : ";
cin>>n3;
cout<<"Enter fourth number : ";
cin>>n4;
ave=(n1+n2+n3+n4)/4;
cout<<"Average"<< ave;
}
cout<<endl<<"Program End";
}