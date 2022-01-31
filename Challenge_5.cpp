#include <iostream>
using namespace std;
int main()
{
   int amount,dis,payable;
   amount=dis=payable=0;
   string day,month;
   day=month="abc";
   cout<< "Enter the Purchase Amount : ";
   cin>> amount;
   cout<<"Enter the month : ";
   cin>>month;
   cout << "Enter the day : ";
   cin>> day;
   if(month=="october" && day=="sunday")
   {
       dis=amount*0.10;
       payable=amount-dis;
   }
   else if(month=="november" && day=="thursday")
   {
        dis=amount*0.10;
       payable=amount-dis;
   }
   cout<< "------------------------"<<endl;
   cout << "Discount is : "<< dis<<endl;
   cout<< "Payable Amount : "<< payable<<endl;
   cout<<"Thanks for using.";
}