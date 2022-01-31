#include <iostream>
using namespace std;
int main()
{
    int weight,remWeight,price,extraprice;
    weight=remWeight=price=0;
    char type;
    cout<< "Enter seat type (B for Bussiness & E for Economy) : ";
    cin>> type;
    cout<<"Enter the weight of luggage : ";
    cin>> weight;
    if(type=='B')
    {
        if(weight<=40)
        {
            price=15000;
        }
        else if(weight>=40)
        {
            remWeight=weight-40;
            extraprice=remWeight*1000;
            price=extraprice+15000;
        }
    }
    else if(type=='E')
    {
        if(weight<=25)
        {
            price=8000;
        }
        else if(weight>=25)
        {
            remWeight=weight-25;
            extraprice=remWeight*500;
            price=extraprice+8000;
        }

    }

    cout<<"------------------------------"<<endl;
    cout<<"Payable amount is : "<<price;
}