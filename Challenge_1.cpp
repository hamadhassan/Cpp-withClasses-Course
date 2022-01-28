#include <iostream>
using namespace std;
int main()
{
   int amount,dis,payable;
   string day;
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
       dis=0;
       payable=amount;
   }
   cout<< "------------------------"<<endl;
   cout << "Discount is : "<< dis<<endl;
   cout<< "Payable Amount : "<< payable<<endl;
   cout<<"Thanks for using.";

}