#include <iostream>
using namespace std;
/*Assume the definition of laptopType. Declare a laptopType variable and write statements to
store the following information:
Manufacturer—Computer Corporation,
model—HP,
processor speed—2.3,
RAM—12 GB,
hard drive size—500 GB,
Generation—5,
and the price—70000.*/
struct laptopType
{
    string manufacturer, modelType;
    float processor = 0.0; // in GB
    int ram = 0;           // in GB
    int hardDriveSize = 0; // in GB
    int generation = 0;
    double price = 0;
};
void storeInput();
void displayInput();
laptopType rec1;
int main()
{
    storeInput();
    cout << "---------------------------------" << endl;
    displayInput();
}
void storeInput()
{
    rec1.manufacturer = "Computer Corporation";
    rec1.modelType = "HP";
    rec1.processor = 2.3;
    rec1.ram = 12;
    rec1.hardDriveSize = 500;
    rec1.generation = 5;
    rec1.price = 70000;
}
void displayInput()
{
    cout << "Manufacturer : " << rec1.manufacturer << endl;
    cout << "Model type : " << rec1.modelType << endl;
    cout << "Processor in GB : " << rec1.processor << endl;
    cout << "RAM in GB : " << rec1.ram << endl;
    cout << "Hard drive size in GB : " << rec1.hardDriveSize << endl;
    cout << "Generation : " << rec1.generation << endl;
    cout << "Price of laptope : " << rec1.price << endl;
}