#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;

int main() {
    // Power and roots
    cout << "pow(2, 3) = " << pow(2, 3) << endl;           // 8
    cout << "sqrt(16) = " << sqrt(16) << endl;             // 4
    
    // Rounding
    cout << "ceil(4.2) = " << ceil(4.2) << endl;           // 5
    cout << "floor(4.8) = " << floor(4.8) << endl;         // 4
    cout << "round(4.5) = " << round(4.5) << endl;         // 5
    
    // Absolute value
    cout << "fabs(-7.5) = " << fabs(-7.5) << endl;         // 7.5
    
    // Trigonometry (using radians)
    double angle = M_PI / 4;  // 45 degrees
    cout << "sin(45) = " << sin(angle) << endl;           // 0.707
    cout << "cos(45) = " << cos(angle) << endl;           // 0.707
    
    // Logarithms
    cout << "log10(100) = " << log10(100) << endl;         // 2
    cout << "log2(8) = " << log2(8) << endl;               // 3
    
    // Max and Min
    cout << "fmax(5.5, 3.2) = " << fmax(5.5, 3.2) << endl; // 5.5
    cout << "fmin(5.5, 3.2) = " << fmin(5.5, 3.2) << endl; // 3.2
    
    // Hypotenuse
    cout << "hypot(3, 4) = " << hypot(3, 4) << endl;       // 5
    
    return 0;
}
