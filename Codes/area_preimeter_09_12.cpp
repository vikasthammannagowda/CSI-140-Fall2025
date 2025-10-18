#include <iostream>


using namespace std;

int main() {
	// Declare constant for "PI" and initialize it to 3.14159
	const double PI = 3.14159; // leave out a semicolon -> syntax error

	// Declare a variable called "radius" to store the radius of the circle 5.6 units
	double radius = 5.6; // add the value 5.6

	// Note: We will revist this code later to take user input for radius
	// send a prompy to user using cout
	cout << "Please enter the radius of the circle: " << endl;
	// get user input
	cin >> radius; // Radius -> syntax error

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

	// Dispaly the result
	cout << "The circumference of the circle is: " << circumference_circle << endl;

	// run time error;
	// int value_1 = radius / 0;

	// Calculate the area and perimeter of a rectangle
	// Declare variables with appropriate data type
	// Inputs
	double lengthRectangle = 5; 
	double widthRectangle = 6; 

	// Outputs
	double rectangleArea = 0; 
	double rectanglePerimeter = 0;
	// Get user inputs
	cout << "what is the length of the rectangle" << endl;
	cin >> lengthRectangle;

	cout << "what is the width of the rectangle" << endl; 
	cin >> widthRectangle;


	// Do the math
	rectangleArea = lengthRectangle * widthRectangle;
	rectanglePerimeter = (lengthRectangle * 2) + (widthRectangle * 2);
	// Display the result

	cout << "The area of the rectangle is: " << rectangleArea<< endl ;

	cout << "The perimeter of the rectangle is: " << rectanglePerimeter << endl ;

	// Calculate the area and perimeter of a square
	// Declare variables with appropriate data type
	double area_square = 0;
	double perimeter_square = 0;
	double length_square = 0;

	// Get user inputs
	cout << "please enter the length of the square " << endl;
	cin >> length_square;

	// Do the math
	area_square = length_square * length_square;
	perimeter_square = 4 * length_square;


	// Display the result
	cout << "the area of the square is: " << area_square << endl;
	cout << "the perimeter of the square is: " << perimeter_square << endl;


	return 0;
}