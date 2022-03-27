#include <iostream>
using namespace std;
/*First of all, make a pointer that will point towards the start of the Linked List.
Initially, there is no laptop record therefore, the starting pointer (let’s call it head) will
point towards NULL.*/
struct laptopType
{
    string manufacturerName;
    string model;
    float processor;
    int RAM;
    int hardDrive;
    int generation;
    int price;
    laptopType *next;
};
laptopType *head;
//head = NULL;
int main()
{
}