// circle_positive_input.cpp : 
// Find area and radius of a circle for a user defined radius
// condition: the code must work for positive inputs

#include <iostream>
using namespace std;
int main()
{
    double radius = 0;
    double area_circle = 0;
    double circumference_circle = 0;
    const double PI = 3.14;

    // get user input for radius
    cout << "Please enter the radius of the circle:" << endl;
    cin >> radius;

    if (radius > 0) {// condition to check for a positive value
        //calculate area and circumference
        area_circle = PI * radius * radius;
        circumference_circle = 2 * PI * radius;
        // display the results
        cout << "The area of the circle is: " << area_circle << endl;
        cout << "The circumference of the circle is: " << circumference_circle << endl;
    }
    else {
        cout << "Invalid input!" << endl;
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
