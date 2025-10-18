// ConsoleApplication5.cpp : 
// Calculate the weekly pay of an employee
// account for over time

#include <iostream>
using namespace std;
int main()
{
    double hours_worked = 0; // global variable
    double hourly_wage = 0; // global variable
    double total_pay = 0; // global variable

    // get user inputs for hours worked and hourly wage
    cout << "Please enter the total hours worked including the over time:";
    cin >> hours_worked;
    cout << "Please enter the hourly wage:";
    cin >> hourly_wage;

    //Logic
    if ((hours_worked > 0) && (hourly_wage > 0)) {
        if (hours_worked > 40) {
            // calculate regular pay for the first 40 hours
            // declaration + assignment
            double regular_pay = 40 * hourly_wage; // local variable
            // calculate the pay for the overtime only
            double over_time_pay = (hours_worked - 40) * 1.5 * hourly_wage;
            // calculate the total pay
            total_pay = regular_pay + over_time_pay; // local variable
            cout << "The regular pay is:" << regular_pay << endl;
        }
        else { // the hours worked is lesser than or equal to 40
            // caluclate the total pay
            total_pay = hours_worked * hourly_wage;
        }
        // display the result
        cout << "The total pay for the week is:" << total_pay << endl;
    }
    else {
        cout << "Invalid input!" << endl;
    }

    // display the regular_pay
    // cout << "The regular pay is:" << regular_pay << endl;
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
