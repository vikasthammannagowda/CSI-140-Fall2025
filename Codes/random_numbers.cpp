#include <iostream>
#include <cstdlib>   // For rand(), srand(), and RAND_MAX
#include <ctime>     // For time() function
using namespace std;

int main() {
    // srand(time(0)) - Seeds the random number generator with current time
    // - srand() initializes the random number generator
    // - time(0) returns current time in seconds since Jan 1, 1970
    // - This ensures different random numbers each time you run the program
    // - Without this, rand() will generate the same sequence every time
    srand(time(0));
    
    cout << "=== Random Number Generation ===" << endl << endl;
    
    // ============================================
    // GENERATING RANDOM INTEGERS
    // ============================================
    cout << "RANDOM INTEGERS:" << endl;
    cout << "----------------" << endl;
    
    // Generate random integer (0 to RAND_MAX)
    // RAND_MAX is the maximum value rand() can return 
    int random1 = rand();
    cout << "Random integer (0 to RAND_MAX): " << random1 << endl;
    cout << "RAND_MAX value: " << RAND_MAX << endl << endl;
    
    // Generate random integer between 0 and 99
    // rand() % 100 gives remainder when divided by 100, so result is 0-99
    int random2 = rand() % 100;

    
    // Generate random integer between 1 and 100
    // rand() % 100 gives 0-99, adding 1 shifts range to 1-100

    
    // Generate random integer between 50 and 150
    // Formula: min + rand() % (max - min + 1)

    
    cout << endl;
    
    // ============================================
    // GENERATING RANDOM FLOATING POINT NUMBERS
    // ============================================
    cout << "RANDOM FLOATING POINT NUMBERS:" << endl;
    cout << "------------------------------" << endl;
    
    // Generate float between 0.0 and 1.0
    // (float)rand() - converts rand() result to float
    // Dividing by RAND_MAX normalizes the value to range 0.0 to 1.0
    // RAND_MAX is the maximum value rand() returns, so dividing gives fraction
    float random5 = (float)rand() / RAND_MAX;
    //cout << "Random float (0.0 to 1.0): " << random5 << endl;
    
    // Generate float between 0.0 and 10.0
    // Multiply by 10.0 to scale the range from [0,1] to [0,10]
    float random6 = ((float)rand() / RAND_MAX) * 10.0;
    //cout << "Random float (0.0 to 10.0): " << random6 << endl;
    
    // Generate float between 5.0 and 15.0
    // Formula: min + ((float)rand() / RAND_MAX) * (max - min)
    // This shifts the range and scales it to desired interval
    float min_float = 5.0;
    float max_float = 15.0;
    float random7 = min_float + ((float)rand() / RAND_MAX) * (max_float - min_float);
    //cout << "Random float (5.0 to 15.0): " << random7 << endl;
    
    // Generate double between -50.0 and 50.0
    double min_double = -50.0;
    double max_double = 50.0;
    double random8 = min_double + ((double)rand() / RAND_MAX) * (max_double - min_double);
    //cout << "Random double (-50.0 to 50.0): " << random8 << endl;
    
    //cout << endl;
    
    // ============================================
    // GENERATE MULTIPLE RANDOM NUMBERS
    // ============================================
    cout << "GENERATE 5 RANDOM INTEGERS (1 to 10):" << endl;
    cout << "--------------------------------------" << endl;

    
    return 0;
}

/*
FORMULAS SUMMARY:
-----------------

Random Integer in range [min, max]:
    int result = min + rand() % (max - min + 1);

Random Float in range [min, max]:
    float result = min + ((float)rand() / RAND_MAX) * (max - min);

KEY CONCEPTS:
- srand(time(0)): Seeds random generator with current time for different results each run
- RAND_MAX: Maximum value rand() can return (system dependent, usually 32767 or 2147483647)
- rand(): Returns pseudo-random integer between 0 and RAND_MAX
- rand() % N: Returns random integer between 0 and N-1
*/