#include<iostream>
using namespace std;
int main()
{
float Dis,Amount,Total;
cout<< "Enter the amount : ";
cin>> Amount;
if(Amount<=5000)
{
Dis=(Amount*0.05);
}
else
{
Dis=(Amount*0.10);
}
Total=Amount-Dis;
cout <<"------------------------"<<endl;
cout<< "Actual amount : "<< Amount<<endl;
cout <<"Discount amount  : " <<Dis<<endl;
cout << "Payable amount : "<< Total;
}