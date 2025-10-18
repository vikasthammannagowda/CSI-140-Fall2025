// guessing_game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    // Generate a random number 
    int game_repeat = 1;
    while (game_repeat == 1) {
        srand(time(0));
        int random_number = rand() % 100 + 1; // this generates random number betwen 1 and 100
        int user_guess;
        int play_again = 0;

        cout << "========================================" << endl;
        cout << "    Welcome to Number Guessing Game    " << endl;
        cout << "========================================" << endl;
        cout << "I've picked a random number between 1 and 100." << endl;
        cout << "Your goal is to guess the number!" << endl;

        while (true) {
            cout << "Enter your guess: ";
            cin >> user_guess;

            // Input validation
            if ((user_guess >= 1) && (user_guess <= 100)) { // user_guess is between 1 and 100 (including both)
                cout << "Valid input!" << endl;
                break;
            }
            else {
                cout << "Invalid input! Please enter a number." << endl;
            }
        }

        if (user_guess == random_number) {// Check if the guess equals the random number
            cout << "   CONGRATULATIONS! YOU WON! " << endl;
        }
        else {
            cout << "You lost!" << endl;
        }
        cout << "========================================" << endl;
        cout << "Your guess:" << user_guess << endl;
        cout << "Computer guess: " << random_number << endl;

        cout << "Do you wish to try your luck again? (1/0)";
        cin >> game_repeat;
    }

    cout << "\nThanks for playing! " << endl;
    cout << "========================================" << endl;

    return 0;
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
