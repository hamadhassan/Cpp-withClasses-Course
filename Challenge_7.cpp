#include <iostream>
using namespace std;
// Function prototype or deceleration
void taxCalculator(char type, float price);
// Main Function
int main()
{
    /*You’ve been hired by Automobile company to write a program to help the tax collector calculate
    vehicle taxes. Vehicle taxes are based on two pieces of information; the price of the vehicle and
    the vehicle type code.Vehicle Type Vehicle Code Tax Rate
    Motorcycle M 6%  Electric E 8%  Sedan S 10%  Van V 12%  Truck T 15%
    After the tax has been calculated, the program should display the following on the screen;
    The final price on a vehicle of type xxx after adding the tax is $xxx.
    with xxx replaced by the vehicle type and $xxx with the final price.
    Your job is to write a function
    float taxCalculator(char type, float price);
    and then write the main function for taking the input from the user and then displaying
    the final output. */
    char type;   // Take vehicel data type
    float price; // Take vehicle price
    cout << "Enter vehicle code : ";
    cin >> type;
    cout << "Enter the price of vehicle : ";
    cin >> price;
    cout << "--------------------------------------" << endl;
    taxCalculator(type, price); // function called
}
// Function definition
void taxCalculator(char type, float price)
{ // function body
    float taxAmount, finalAmount;
    string output;
    string vehicleType;
    // Motorcycle
    if (type == 'M' || type == 'm')
    {
        vehicleType = "Motorcycle";
        taxAmount = price * (0.06);
        finalAmount = price + taxAmount;
        cout << "The final price on a vehicle of type " << type << " after adding the tax is " << taxAmount << "$" << endl;
        cout << "with " << vehicleType << " replaced by the vehicle type and " << finalAmount << "$ with the final price.";
    }
    // Electric
    else if (type == 'E' || type == 'e')
    {
        vehicleType = "Electric";
        taxAmount = price * (0.08);
        finalAmount = price + taxAmount;
        cout << "The final price on a vehicle of type " << type << " after adding the tax is " << taxAmount << "$" << endl;
        cout << "with " << vehicleType << " replaced by the vehicle type and " << finalAmount << "$ with the final price.";
    }
    // Sedan
    else if (type == 'S' || type == 's')
    {
        vehicleType = "Sedan";
        taxAmount = price * (0.10);
        finalAmount = price + taxAmount;
        cout << "The final price on a vehicle of type " << type << " after adding the tax is " << taxAmount << "$" << endl;
        cout << "with " << vehicleType << " replaced by the vehicle type and " << finalAmount << "$ with the final price.";
    }
    // Van
    else if (type == 'V' || type == 'v')
    {
        vehicleType = "Van";
        taxAmount = price * (0.12);
        finalAmount = price + taxAmount;
        cout << "The final price on a vehicle of type " << type << " after adding the tax is " << taxAmount << "$" << endl;
        cout << "with " << vehicleType << " replaced by the vehicle type and " << finalAmount << "$ with the final price.";
    }
    // Truck
    else if (type == 'T' || type == 't')
    {
        vehicleType = "Truck";
        taxAmount = price * (0.15);
        finalAmount = price + taxAmount;
        cout << "The final price on a vehicle of type " << type << " after adding the tax is " << taxAmount << "$" << endl;
        cout << "with " << vehicleType << " replaced by the vehicle type and " << finalAmount << "$ with the final price.";
    }
    else
    {
        cout << "Invalid option";
    }
}
