#include <iostream>
using namespace std;
/*Now make an array of laptopType that can store 5 laptops data.*/
const int length = 5;
struct laptopType
{
    string manufacturer[length], modelType[length];
    float processor[length];   // in GB
    int ram[length];           // in GB
    int hardDriveSize[length]; // in GB
    int generation[length];
    double price[length];
};
laptopType storeInput();
void displayInput(laptopType objRecord1);
laptopType rec1;
int main()
{
    laptopType objRecord1 = storeInput();
    cout << "---------------------------------" << endl;
    displayInput(objRecord1);
}
laptopType storeInput()
{
    for (int i = 0; i < length; i++)
    {
        cout << "Enter manufacturer : ";
        cin >> rec1.manufacturer[i];
        cout << "Enter model type : ";
        cin >> rec1.modelType[i];
        cout << "Enter processor in GB : ";
        cin >> rec1.processor[i];
        cout << "Enter RAM in GB : ";
        cin >> rec1.ram[i];
        cout << "Enter hard drive size in GB : ";
        cin >> rec1.hardDriveSize[i];
        cout << "Enter generation : ";
        cin >> rec1.generation[i];
        cout << "Enter price of laptope : ";
        cin >> rec1.price[i];
        cout << "-------------------------------------------" << endl;
    }
    return rec1;
}
void displayInput(laptopType objRecord1)
{
    for (int i = 0; i < length; i++)
    {
        cout << "Manufacturer : " << rec1.manufacturer[i] << endl;
        cout << " Model type : " << rec1.modelType[i] << endl;
        cout << " Processor in GB : " << rec1.processor[i] << endl;
        cout << " RAM in GB : " << rec1.ram[i] << endl;
        cout << " Hard drive size in GB : " << rec1.hardDriveSize[i] << endl;
        cout << " Generation : " << rec1.generation[i] << endl;
        cout << " Price of laptope : " << rec1.price[i] << endl;
        cout << "-------------------------------------------" << endl;
    }
}
