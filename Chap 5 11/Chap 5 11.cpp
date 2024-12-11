// Chap 5 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

double population, rate, days, totalpop;
double increment, accumulator;

int main()
{
   
    cout << "Please enter the starting number of organisms." << endl;
    do {
        cin >> population;

        if (population < 2) {
            cout << "INVALID. Must be >2" << endl;
        }
    } while (population < 2);
    cout << "Please enter the average daily population increase (%)." << endl;
    do {
        cin >> rate;

        if (rate < 0) {
            cout << "INVALID. Must be >0" << endl;
        }
    } while (rate < 0);
    cout << "Please enter the number of days of population increase." << endl;
    do {
        cin >> days;

        if (days < 1) {
            cout << "INVALID. Must be >1" << endl;
        }
    } while (days < 1);
    cout << "Population for starting day: " << population << endl;
    increment = 1;
    accumulator = population;
    while (increment <= days) {
        accumulator = population * (rate / 100) + accumulator;
        totalpop = round(accumulator);
        cout << "Population for day " << increment << ": " << totalpop << " (" << accumulator << ")." << endl;
        ++increment;
    }
    cout << "The total population after " << days << " days will be " << totalpop << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


