// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int num = 0;

    while (true) { //iteration 1, 2

        num = num + 2; // num += 2
        // num = 0 + 2; -> num = 2, num = 2+2 = 4...., num = 14 + 2 = 16
         // i want to skip all multiples of 10
        if ((num % 10) == 0) { // 2 == 10, ...., 10 == 10// (num % 10 == 0)
            cout << "Skipping" << endl;
            continue;
        }
        
        cout << num << endl;

        if (num > 101) { // 2 > 15, 4>15, ...., 16>15
            break;
        }
    }
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
