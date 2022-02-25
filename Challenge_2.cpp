#include <iostream>
using namespace std;
const int arraylength = 10;
string question[arraylength] = {"17 + 42", "2 + 2", "3 + 3", "9 + 9", "5 + 5", "6 + 6", "7 + 7", "8 + 8", "9 + 10", "10 + 10"};
int optionkey[arraylength] = {59, 4, 6, 18, 25, 12, 14, 16, 19, 20};
char key[arraylength] = {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a'};
char userchoise[arraylength];
float score[arraylength];
float quizGrade[3];
// prototype
void menu();
void quiz();
void points(int i); // used to repeat the option until the correct option not enterd and also save score
void result();
float totalsum(); // store the total result
void header();
int main()
{
    menu();
}
// definition
void header()
{

    cout << "*********************************************************************************" << endl;
    cout << "**********                                                             **********" << endl;
    cout << "*****                        Online Quiz Application                        *****" << endl;
    cout << "**********                                                             **********" << endl;
    cout << "*********************************************************************************" << endl;
}
void menu()
{
    int option = 0;
    int countQuiz = 0;
    while (option != 4)
    {
        header();
        cout << "Chose option" << endl;
        cout << "1-Take quiz" << endl;
        cout << "2-Result" << endl;
        cout << "3-Answer Key" << endl;
        cin >> option;
        system("cls");
        if (option == 1)
        {
            quiz();                            // function called
            quizGrade[countQuiz] = totalsum(); // store each quiz result
            countQuiz += 1;
        }
        else if (option == 2)
        {
            char resultoption = ' ';

            while (resultoption != '3')
            {
                header();
                cout << "Chose option" << endl;
                cout << "1-This test" << endl;
                cout << "2-Rank board" << endl;
                cout << "Press 0 to Go Back...";
                cin >> resultoption;
                if (resultoption == '0')
                {
                    break;
                }
                else if (resultoption == '1')
                {
                    result(); // funcion called
                }
                else if (resultoption == '2')
                { // in this result will in sort form
                    cout << "Sort Data" << endl;
                }
                else
                {
                    cout << "Invalid option" << endl;
                    break;
                }
            }
        }
        else if (option == 3)
        {
            for (int i = 0; i < arraylength; i++)
            {
                cout << "Question no " << i + 1 << ":-\t" << question[i] << endl;
                cout << "Correct option is : " << key[i] << endl;
                cout << "--------------------" << endl;
            }
        }
    }
}
void quiz()
{
    for (int i = 0; i < arraylength; i++)
    {
        cout << "Question no " << i + 1 << ":-\t" << question[i] << endl;
        cout << "Option are..." << endl;
        if (i >= 0 && i <= 7)
        {
            cout << "a) " << optionkey[i] << "\t";
            cout << "b) " << optionkey[i + 1] << "\t";
            cout << "c) " << optionkey[i + 2] << endl;
            points(i);
            cout << endl;
        }
        else if (i == 8)
        {
            cout << "a) " << optionkey[i] << "\t";
            cout << "b) " << optionkey[i + 1] << "\t";
            cout << "c) " << optionkey[i - 1] << endl;
            points(i);
            cout << endl;
        }
        else if (i == 9)
        {
            cout << "a) " << optionkey[i] << "\t";
            cout << "b) " << optionkey[i - 1] << "\t";
            cout << "c) " << optionkey[i - 2] << endl;
            points(i);
            cout << endl;
        }
    }
}
void points(int i)
{
    cin >> userchoise[i];
    if (userchoise[i] == key[i])
    {
        score[i] += 10;
    }
    else if (userchoise[i] != key[i])
    {
        while (userchoise[i] != key[i])
        {
            score[i] -= 2.5;
        }
    }
}
void result()
{
    cout << "Result Summary:-" << endl;
    cout << "--------------------" << endl;
    for (int i = 0; i < arraylength; i++)
    {
        cout << "Question no " << i + 1 << ":-\t" << question[i] << endl;
        if (score[i] == 10)
        {
            cout << "Correct answer" << endl;
        }
        else
        {
            cout << "Incorrect answer" << endl;
        }
    }
    cout << "---------------------------" << endl;
    cout << "Total score is : " << totalsum() << endl;
}
float totalsum()
{
    int result = 0;
    for (int i = 0; i < arraylength; i++)
    {
        result += score[i];
    }
    return result;
}