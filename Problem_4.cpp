#include<iostream>
using namespace std;
int main()
{
//N for number and P for price 

int Nred,Nwhite,Ntulips;
float Pred,Pwhite,Ptulips,dis,price;

cout << "Enter number of Red Rose : ";
cin>> Nred;
Pred=Nred*2.00;

cout <<"Enter number of White Rose : ";
cin>>Nwhite;
Pwhite=Nwhite*4.10;

cout <<"Enter number of Tulips : ";
cin>>Ntulips;
Ptulips=Ntulips*2.50;

price=Pred+Pwhite+Ptulips;

if(price>200)
{
dis=price*0.20;
dis=price-dis;
cout << "Original Price : "<< price<<endl;
cout << "Price after Discount : "<< dis;
}
else 
{
cout << "Original Price : "<< price;
}

}