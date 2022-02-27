#include <iostream>
using namespace std;
/*Write a program that declares two arrays same size name as character array of
code and float discount array. Each code will represent discount value. Program
should prompt the user to enter total number item, price and code. Program will
return discount value against code and will display total value of bill.
Solution*/
const int arraysLenght = 5;
char code[arraysLenght] = {'a', 'b', 'c', 'd', 'e'};
float discount[arraysLenght] = {.25, .10, .20, .30, .50};
// prototype
float discount_Amount(char user_code);
float calulation(float total_items, float items_price, float discountValue);

int main()
{
    float total_items, items_price, discountValue, total;
    char userCode;
    cout << "Enter total items : ";
    cin >> total_items;
    cout << "Enter price per item : ";
    cin >> items_price;
    cout << "Enter code for discount : ";
    cin >> userCode;
    discountValue = discount_Amount(userCode);
    total = calulation(total_items, items_price, discountValue);
    cout << "Total bill is : " << total << endl;
}
//  definition
float discount_Amount(char user_code)
{
    float discountValue = 0.0;
    for (int i = 0; i < arraysLenght; i++)
    {
        if (user_code == code[i])
        {
            discountValue = discount[i];
        }
    }
    return discountValue;
}
float calulation(float total_items, float items_price, float discountValue)
{
    float purchasePrice = 0.0;                         // actual  price
    float discountAmount = 0.0;                        // discount amount
    float billAmount = 0.0;                            // payable amount
    purchasePrice = total_items * items_price;         // actual price calulation
    discountAmount = purchasePrice * discountValue;    // discount amount calulation
    billAmount = ((purchasePrice) - (discountAmount)); // actual price-discount price
    return billAmount;
}
