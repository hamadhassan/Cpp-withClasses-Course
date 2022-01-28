#include <iostream>
using namespace std;
int main()
{
   int amount,dis,payable;
   amount=dis=payable=0;
   string day;
    day="abc";
   cout<< "Enter the Purchase Amount : ";
   cin>> amount;
   cout << "Enter the day : ";
   cin>> day;
   if(amount>=5000 && day=="sunday")
   {
       dis=amount*0.10;
       payable=amount-dis;
   }
   else
   {
       dis=amount*0.05;
       payable=amount-dis;
   }
   cout<< "------------------------"<<endl;
   cout << "Discount is : "<< dis<<endl;
   cout<< "Payable Amount : "<< payable<<endl;
   cout<<"Thanks for using.";
}