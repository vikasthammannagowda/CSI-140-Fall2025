#include <iostream>
#include <limits> // for numeric_limits
using namespace std;

int main() {
    int number;

    while (true) {
        cout << "Enter a positive number: ";
        cin >> number;

        if (cin.fail()) {
            // Input was not an integer
            cin.clear(); // clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << "Invalid input! Please enter a number.\n";
        }
        else if (number <= 0) {
            cout << "Number must be positive! Try again.\n";
        }
        else {
            break; // valid input
        }
    }

    cout << "You entered: " << number << endl;
    return 0;
}
