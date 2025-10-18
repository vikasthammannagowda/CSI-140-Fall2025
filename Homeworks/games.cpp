#include <iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()

using namespace std;

int main() {
    // Seed random number generator
    srand(time(0));
    
    // Casino initial setup
    int player_balance = 1000;  // Starting chips
    const int MINIMUM_BET = 10;
    const int MAXIMUM_BET = 500;
    
    cout << "Welcome to C++ Casino!" << endl;
    cout << "Starting balance: $" << player_balance << endl;
    cout << endl;
    
    // ============================================
    // PART 1: Slot Machine Game Using For Loop
    // ============================================
    cout << "=== PART 1: Slot Machine ===" << endl;
    cout << "Current balance: $" << player_balance << endl;
    
    //Ensure that the bet is valid

    
    // Deduct bet from balance
    
    
    int reel1, reel2, reel3;
    
    cout << "Spinning the reels..." << endl;
    
    // TODO: Use a for loop to generate 3 reel values (1-7)
    // Hint: for(int i = 1; i <= 3; i++)
    // Inside loop, generate random number 1-7
    // Assign to reel1, reel2, reel3 based on i
    // Display each reel as it "spins"
    
    
    
    
    cout << "Result: " << reel1 << " | " << reel2 << " | " << reel3 << endl;
    
    // TODO: Check winning conditions and update balance
    // All three match: Win 10x the bet
    // Two match: Win 2x the bet  
    // No matches: Lose the bet (already deducted)
    
    
    
    
    cout << "New balance: $" << player_balance << endl;
    cout << endl;
    
    // ============================================
    // PART 2: Dice Game (Craps) Using While Loop
    // ============================================
    cout << "=== PART 2: Craps Dice Game ===" << endl;
    cout << "Current balance: $" << player_balance << endl;
    
    int dice_bet;
    cout << "Enter your bet for Craps: $";
    cin >> dice_bet;
    
    player_balance -= dice_bet;
    
    char play_again = 'y';
    
    // TODO: Implement Craps game using while loop
    // while (play_again == 'y' && player_balance >= MINIMUM_BET)
    // Roll two dice (die1 + die2)
    // First roll: 7 or 11 = win (2x bet), 2 or 12 = lose
    // Other: becomes "point", keep rolling until match point or get 7
    // Update balance based on outcome
    
    int die1, die2, sum;
    int point = 0;
    bool first_roll = true;
    
    
    
    
    cout << "New balance: $" << player_balance << endl;
    cout << endl;
    

    

    
    return 0;
}