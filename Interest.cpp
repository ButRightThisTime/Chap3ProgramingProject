// InterestEarned.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double principal, rate, timesC, amount;
    cout << setw(20) << left << "Principal" << ": $";
    cin >> principal;
    cout << setw(20) << left << "Times Compounded" << ":  ";
    cin >> timesC;
    cout << setw(20) << left << "Interest Rate" << ": %";
    cin >> rate;
    amount = principal * pow((1 +((rate/100) / timesC)), timesC);
    cout << setw(20) << left << "Ammount" << ": $" << setprecision(2) << fixed << amount;
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
