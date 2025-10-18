#include <iostream>


using namespace std;

int main() {
	// Declare constant for "PI" and initialize it to 3.14159
	const double PI = 3.14159; // const data_type identifier = value;

	// Declare a variable called "radius" to store the radius of the circle 5.6 units
	double radius = 5.6; // add the value 5.6 // data_type identifier = value;

	// Note: We will revist this code later to take user input for radius

	// Declare a variable called "area_circle" to store the area of the circle and initialize it to 0
	double area_circle = 0; // initialize to 0

	// Dispaly the radius of the circle
	cout << "The radius of the circle is:" << radius << endl;

	// Calculate the area of the circle
	// Formula: area =  PI * radius * radius

	area_circle = PI * radius * radius;

	// Display the result
	cout << "The area of the circle is: " << area_circle << endl;

	// Suppose you want to calculate the circumference of the circle and display it
	// I already have declared radius of the circle and the PI value 
	// I just need a variable to store the circumference

	// Declare a variable called "circumference_circle" to store the area of the circle and initialize it to 0
	double circumference_circle = 0;

	// Calculate the circumference of the circle
	// Formula: circumference = 2 * PI * radius

	circumference_circle = 2 * PI * radius;

	// display the result
	cout << "The circumference of circle is:" << circumference_circle << endl;
	return 0;
}