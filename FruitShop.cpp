#include<iostream>
using namespace std;
int main()
{
string fruit;
float weight,actualprice,total;
int discount;
cout << "Enter the fruit name : ";
cin>> fruit;
cout<<"Enter the weight of fruit in kg : ";
cin>> weight;
cout<< "Enter the fruit price per kg : ";
cin>>actualprice;
actualprice=weight*actualprice;
if(fruit=="apple")
{
discount=(actualprice*20/100);
}
if(fruit=="mango")
{
discount=(actualprice*15/100);
}
if(fruit=="grapes")
{
discount=(actualprice*10/100);
}
total=actualprice-discount;
cout<< "-------------------------"<<endl;
cout << "Actual amount:"<< actualprice<<endl;
cout << "Discount amount:"<< discount<<endl;
cout << "Total payable amount:"<< total<<endl;
}