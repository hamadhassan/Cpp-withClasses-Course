#include <iostream>
using namespace std;
/*Define a struct laptopType to store the following data about a laptop: Manufacturer (
string), model type ( string), processor in gigahertz (float), ram (int) in GB, hard
drive size ( int) in GB, generation (int), and the price (double)*/
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
    cout<<"---------------------------------"<<endl;
    displayInput();
}
void storeInput()
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
}
void displayInput()
{
    cout << "Enter manufacturer : " << rec1.manufacturer << endl;
    cout << "Enter model type : " << rec1.modelType << endl;
    cout << "Enter processor in GB : " << rec1.processor << endl;
    cout << "Enter RAM in GB : " << rec1.ram << endl;
    cout << "Enter hard drive size in GB : " << rec1.hardDriveSize << endl;
    cout << "Enter generation : " << rec1.generation << endl;
    cout << "Enter price of laptope : " << rec1.price << endl;
}