#include <iostream>
using namespace std;
int main()
{
int n1,n2;
cout << "Enter first number : ";
cin>>n1;
cout <<"Enter second number : ";
cin>> n2;
if(n1>n2)
{
cout << n1<<" is greater than " << n2;
}
else
{
cout << n2<<" is greater than "<< n1;
}
cout<< "Program End.";
}