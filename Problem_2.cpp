n
{
int price,dis,total;
cout<< "Enter the price of item : ";
cin>> price;
if(price==500)
{
dis=(price*5/100);
price=price-dis;
}
cout<<"Price after Discount : "<<price;
}