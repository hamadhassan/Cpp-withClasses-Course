#include<iostream>
using namespace std;
int main()
{
int n1,n2,n3,n4,n5;
float ave;
cout<<"Enter first number : ";
cin>>n1;
cout<<"Enter second number : ";
cin>>n2;
cout<<"Enter third number : ";
cin>>n3;
cout<<"Enter fourth number : ";
cin>>n4;
cout<<"Enter fifth number : ";
cin>>n5;
ave=(n1+n2+n3+n4+n5)/5;
if(ave<=70)
{
cout <<"Keep working hard. ";
}
else 
{
cout <<"You are brilliant. ";
}
cout<<endl<<"Program End";
}