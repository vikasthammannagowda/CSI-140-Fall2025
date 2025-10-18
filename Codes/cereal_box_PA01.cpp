/*
PROBLEM:
Write a C++ program to read the weight of a box of cereal in ounces then output
this weight in metric tons, along with the number of boxes to yield a metric ton
of cereal.

ALGORITHM:

INPUT:
- Weight of one cereal box (in ounces)

OUTPUT:
- Weight of one box in metric tons
- Number of boxes needed to make one metric ton


Step 1: Start
Step 2: Read the weight of one cereal box in ounces
Step 3: Convert weight from ounces to metric tons
        (find the conversion factor: 1 metric ton = X.Y ounces)
                weight in metric tons = weight in ounces / ounces per metric ton
Step 4: Calculate number of boxes needed for one metric ton
                boxes needed = ounces per metric ton / weight of one box in ounces
Step 5: Display the weight in metric tons
Step 6: Display the number of boxes per metric ton
Step 7: End


*/

#include <iostream>

using namespace std;

int main() {
	// Declare variable to store the weight of cereal box and initialize it to 0
	double weight_ounces = 0.0;

    // Declare variables to store Weight of one box in metric tons and initialize it to 0


    // Declare variables to store Number of boxes needed to make one metric ton and initialize it to 0


    // Declare a constant for Conversion factor: 
    // 1 metric ton =  ounces
	const double ounces_per_metric_ton = ; 

    // Prompt the user to enter the weight of one cereal box in ounces
    cout << " Please enter the weight of one cereal box in ounces:" << endl;

    // Read the weight in ounces
    cin >> ;

    // Convert the weight from ounces to metric tons
    // Formula: weight in metric tons = weight in ounces / ounces per metric ton
     

    // Calculate how many boxes needed to make one metric ton
    // Formula: boxes needed = ounces per metric ton / weight of one box in ounces
    

    // Display the weight of one box in metric tons
    cout << "Weight of one box in metric tons: " <<  << endl;

    // Display the number of boxes needed for one metric ton
    

    return 0;
}