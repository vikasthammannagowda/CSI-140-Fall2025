// Program to build a simple calculator using switch Statement
#include <iostream>
using namespace std;

int main() {
    int user_repeat = 1;
    while (true) { // while(1) -> infinite loop

        char oper;
        double num1 = 0, num2 = 0;
        cout << "Enter an operator (+, -, *, /): ";
        cin >> oper;
        cout << "Enter the first numbers: " << endl;
        cin >> num1;
        cout << "Enter the second numbers: " << endl;
        cin >> num2;

        switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            }
            else {
                cout << "The second number can not be 0!" << endl;
            }
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout << "Error! The operator is not correct" << endl;

        }
        cout << "Do you wish to repeat (1/0)";
        cin >> user_repeat;
        if (user_repeat != 1) {
            break;
        }
    }
    cout << "Thank you for using the calculator" << endl;
    return 0;
}