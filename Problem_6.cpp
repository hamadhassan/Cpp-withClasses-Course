#include <iostream>
using namespace std;
int main()
{
    /*Amir is a fat guy. He wants to lose weight but he is also weak in calculations. Write a simple C++ program
    which tells him how many days he will need to lose weight if he strictly follows the doctor's suggestions.
    Doctor suggested that if he eats 4000 calories daily, he walks for 1 hour daily. It will help him to lose 1 kg
    weight after 15 days. Now Amir wants to know how many days he will need to lose 12 Kg weight if he
    follows the doctor's suggestion.*/
    int cal;
    cout << "Amir eats 4000 calories,walk 1 hour daily and lose 1 kg weight in 15 days." << endl;
    cal = 15 * 12;
    cout << "Amir lose 12kg weight in " << cal << " Days.";
    cout << endl
         << "OR" << endl;
    cal = cal / 30;
    cout << "In " << cal << " Months";
}