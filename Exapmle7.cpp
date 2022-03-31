#include <iostream>
using namespace std;
/*Write a function that will take input of the data related to the laptop and then store it into
the laptopType structure dynamically using new keyword.*/
struct laptopType
{
    string manufacturer, modelType;
    float processor = 0.0; // in GB
    int ram = 0;           // in GB
    int hardDriveSize = 0; // in GB
    int generation = 0;
    double price = 0;
    laptopType *next;
};
laptopType *head = NULL;
void storeInput();
laptopType *getLastRecord(laptopType *temp);
void addRecord(string manufacturer, string modelType, float processor, int ram, int hardDriveSize, int generation, double price);
void printSingleRecord(laptopType *l);
void displayAllRecords();
laptopType rec1;
int main()
{
    storeInput();
    cout << "---------------------------------" << endl;
    storeInput();
    cout << "---------------------------------" << endl;
    displayAllRecords();
}
void storeInput()
{
    string manufacturer, modelType;
    float processor = 0.0; // in GB
    int ram = 0;           // in GB
    int hardDriveSize = 0; // in GB
    int generation = 0;
    double price = 0;
    cout << "Enter manufacturer : ";
    cin >> manufacturer;
    cout << "Enter model type : ";
    cin >> modelType;
    cout << "Enter processor in GB : ";
    cin >> processor;
    cout << "Enter RAM in GB : ";
    cin >> ram;
    cout << "Enter hard drive size in GB : ";
    cin >> hardDriveSize;
    cout << "Enter generation : ";
    cin >> generation;
    cout << "Enter price of laptope : ";
    cin >> price;
    addRecord(manufacturer, modelType, processor, ram, hardDriveSize, generation, price);
}
laptopType *getLastRecord(laptopType *temp) // it will give last record by checking condition if null exit or not
{
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return temp;
}
void addRecord(string manufacturer, string modelType, float processor, int ram, int hardDriveSize, int generation, double price)
{
    laptopType *record = new laptopType;
    record->manufacturer = manufacturer;
    record->modelType = modelType;
    record->processor = processor;
    record->ram = ram;
    record->hardDriveSize = hardDriveSize;
    record->generation = generation;
    record->price = price;
    record->next = NULL;
    if (head == NULL)
    {
        head = record;
    }
    else
    {
        laptopType *temp = getLastRecord(head); // head means that it store first record
        temp->next = record;
    }
}
void printSingleRecord(laptopType *l)
{
    cout << "Manufacturer : " << l->manufacturer << endl;
    cout << "Model type : " << l->modelType << endl;
    cout << "Processor in GB : " << l->processor << endl;
    cout << "RAM in GB : " << l->ram << endl;
    cout << "Hard drive size in GB : " << l->hardDriveSize << endl;
    cout << "Generation : " << l->generation << endl;
    cout << "Price of laptope : " << l->price << endl;
    cout << "---------------------------------" << endl;
}
void displayAllRecords()
{
    laptopType *temp = head;
    while (temp != NULL)
    {
        printSingleRecord(temp);
        temp = temp->next;
    }
}