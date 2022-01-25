#include<iostream>
using namespace std;
int main()
{
float temp1,temp2,cal;
cout<< "Enter City 1 Temperature: ";
cin>> temp1;
cout <<"Enter City 2 Temperature: ";
cin>>temp2;
cal=temp1-temp2;
if(cal>10)
{
cout << "Difference is too Big";
}
cout << "Program End.";
}