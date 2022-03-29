#include <iostream>
using namespace std;
/*Now, Write a function that prompts the user to input data about a laptop and then return
that structure laptopType to the main function.*/
struct laptopType
{
    string manufacturer, modelType;
    float processor = 0.0; // in GB
    int ram = 0;           // in GB
    int hardDriveSize = 0; // in GB
    int generation = 0;
    double price = 0;
};
laptopType storeInput();
void displayInput(laptopType objRecord1);
laptopType rec1;
int main()
{
    laptopType objRecord1;
    objRecord1 = storeInput();
    cout << "---------------------------------" << endl;
    displayInput(objRecord1);
}
laptopType storeInput()
{
    cout << "Enter manufacturer : ";
    cin >> rec1.manufacturer;
    cout << "Enter model type : ";
    cin >> rec1.modelType;
    cout << "Enter processor in GB : ";
    cin >> rec1.processor;
    cout << "Enter RAM in GB : ";
    cin >> rec1.ram;
    cout << "Enter hard drive size in GB : ";
    cin >> rec1.hardDriveSize;
    cout << "Enter generation : ";
    cin >> rec1.generation;
    cout << "Enter price of laptope : ";
    cin >> rec1.price;
    return rec1;
}
void displayInput(laptopType objRecord1)
{
     cout << "Manufacturer : " << rec1.manufacturer << endl;
    cout << "Model type : " << rec1.modelType << endl;
    cout << "Processor in GB : " << rec1.processor << endl;
    cout << "RAM in GB : " << rec1.ram << endl;
    cout << "Hard drive size in GB : " << rec1.hardDriveSize << endl;
    cout << "Generation : " << rec1.generation << endl;
    cout << "Price of laptope : " << rec1.price << endl;
}