/*Write a dice game. 
The user and the computer take turns rolling 2 dice. 
The winner is the one who, according to the results of 3 throws, has the most amount. 
Provide a beautiful game interface.*/

#include <iostream>
using namespace std;

// Generate a random number between 1 and 6
int roll_dice() {

    return rand() % 6 + 1;
}
int main()
{   // Main loop
    while (true) {
        srand(time(NULL)); // Initialize random seed

        // Veriables for scores
        int user_score = 0;
        int computer_score = 0;

        //Interface
        cout << "\t\t\t***************************" << endl;
        cout << "\t\t\t*Welcome to the dice game!*" << endl;
        cout << "\t\t\t***************************" << endl;
        cout << "\t\t\t      _________" << endl;
        cout << "\t\t\t     /  3     /|" << endl;
        cout << "\t\t\t    /_______ / |" << endl;
        cout << "\t\t\t   |        |  |" << endl;
        cout << "\t\t\t   |        | 2|" << endl;
        cout << "\t\t\t   |   6    |  |" << endl;
        cout << "\t\t\t   |        | / " << endl;
        cout << "\t\t\t   |________|/  " << endl;
        cout << endl;

        // Loop for rolling
        for (int i = 0; i < 3; i++) {
            // User's turn
            cout << "Your turn. Press enter to roll the dice..." << endl;
            while (cin.get() != '\n') {} // Is used to wait for the user to press the Enter key before continuing with the program execution
            int user_roll1 = roll_dice(); // Calls the roll_dice() function and assigns its return value to the variable 
            int user_roll2 = roll_dice();
            int user_total = user_roll1 + user_roll2;
            cout << "You rolled " << user_roll1 << " and " << user_roll2 << " for a total of " << user_total << "." << endl;
            user_score += user_total;

            // Computer's turn
            cout << "Computer's turn. Press enter to roll the dice..." << endl;
            while (cin.get() != '\n') {}
            int computer_roll1 = roll_dice();
            int computer_roll2 = roll_dice();
            int computer_total = computer_roll1 + computer_roll2;
            cout << "Computer rolled " << computer_roll1 << " and " << computer_roll2 << " for a total of " << computer_total << "." << endl;
            computer_score += computer_total;

            // Display current score
            cout << "Current score: You " << user_score << " - " << computer_score << " Computer" << endl;
        }

        // Determine winner
        cout << "\nFinal score: You " << user_score << " - " << computer_score << " Computer" << endl;

        // Comparing values 
        if (user_score > computer_score) {
            cout << "\nCongratulations, you win!" << endl;
        }
        else if (user_score < computer_score) {
            cout << "\nSorry, you lose. Better luck next time!" << endl;
        }
        else {
            cout << "\nIt's a tie!" << endl;
        }

        // Exit
        int exit;

        cout << "\nFor exit pres 1\nTo continue press 2:\n"; cin >> exit;

        if (exit == 1) { 

            break;
        }       
    }
}