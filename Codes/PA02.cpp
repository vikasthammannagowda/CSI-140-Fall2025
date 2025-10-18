/*
Question:
Write a program in C++ to convert temperature between Celsius and Fahrenheit
depending on the user's choice.

Inputs:
1. User choice ('C' to convert Fahrenheit ? Celsius, 'F' to convert Celsius ? Fahrenheit)
2. Temperature value (numeric, entered by the user)

Outputs:
1. Converted temperature value (Celsius or Fahrenheit depending on choice)
2. Error message if invalid choice is entered

Steps:
1. Start program.
2. Display menu:
   - 'C' for Fahrenheit to Celsius
   - 'F' for Celsius to Fahrenheit
3. Read user choice.
4. If choice == 'C' or 'c':
      - Input temperature in Fahrenheit
      - Convert to Celsius using formula: LOOP UP for the EQUATION
      - Display result
   Else if choice == 'F' or 'f':
      - Input temperature in Celsius
      - Convert to Fahrenheit using formula: LOOP UP for the EQUATION
      - Display result
   Else:
      - Print "Invalid choice!"
5. End program.
*/

#include <iostream>
using namespace std;

int main() {
    // Variables
    // input temperature
    // result after conversion
    // user choice: 'C' or 'F'

    // Display menu to user
    cout << "Temperature Conversion Program\n";
    cout << "---------------------------------\n";
    cout << "Enter 'C' to convert Fahrenheit to Celsius\n";
    cout << "Enter 'F' to convert Celsius to Fahrenheit\n";

    //Get user input for user choice

    // Check the user choice
    if () {
        // Fahrenheit to Celsius conversion
        //get user input for temp reading in Fahrenheit


        // do the math

        // display the result

    }
    else if () {
        // Celsius to Fahrenheit conversion
        //get user input for temp reading in Celsius


        // do the math

        // display the result

    }
    else {
        // Invalid input handling
        cout << "Invalid choice! Please enter 'C' or 'F'.\n";
    }

    return 0;
}
