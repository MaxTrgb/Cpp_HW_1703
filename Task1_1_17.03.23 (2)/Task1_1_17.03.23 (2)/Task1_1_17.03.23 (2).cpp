/*Task1. Write a program that displays a line on the screen with a given symbol, vertical or horizontal,
and the line can be displayed quickly, normally and slowly. Communication with the user can be organized through the menu.

In this version you can enter anything in every field and the program will work properly.
To be honest I spent a lot of time on this version, and I`m not sure if it was necesary. But I wanted to test my skills and learn something new*/
 

#include <iostream>                  
#include <chrono>// The code uses the this_thread::sleep_for function to pause the program execution for a certain amount of time, depending on the user inputted speed
#include <thread>// this_thread::sleep_for takes a duration argument, which is created using the chrono library
#include <string>

using namespace std;

int main() {

    //Basic variables
    string symbol;
    int direction, speed;
    cout << "You can display the line vertical or horizontal, and quickly, normally and slowly." << endl;

    // Start of endless loop
    while (true) {

        // 
        cout << "\nEnter 0 to exit or any other symbol to continue: ";
        cin >> symbol;

        if (symbol[0] == '0') { // Exit

            break;
        }
        // User inputs symbol
        cout << "Enter a symbol: ";
        cin >> symbol;

        // User inpust direction
        cout << "Enter direction (1 for vertical, 2 for horizontal): ";
        cin >> direction;

        // Check for valid direction input
        if (direction != 1 && direction != 2) {

            // When the user has entered invalid input we need to clear the input buffer before accepting new input
            // this helps to avoid endless loop
            cout << "Invalid direction." << endl;
            cin.clear();  // Clear the input buffer
            //sets the maximum number of characters to ignore, there is no limit to the number of characters to ignore.
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Discard any remaining input
            continue;
        }

        // User inputs speed
        cout << "Enter speed (1 for quickly, 2 for normally, 3 for slowly): ";
        cin >> speed;

        // Check for valid speed input
        if (speed < 1 || speed > 3) {

            cout << "Invalid speed." << endl;
            cin.clear();  // Clear the input buffer
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Discard any remaining input
            continue;
        }

        // Display line based on user input
        if (direction == 1) { // Vertical

            for (int i = 0; i < 10; i++) {

                cout << symbol << endl;
                if (speed == 1) {
                    // Quickly
                    this_thread::sleep_for(chrono::milliseconds(100));
                }
                else if (speed == 2) {
                    // Normally
                    this_thread::sleep_for(chrono::milliseconds(500));
                }
                else {
                    // Slowly
                    this_thread::sleep_for(chrono::seconds(1));
                }
            }
        }
        else { // Horizontal

            for (int i = 0; i < 10; i++) {

                cout << symbol;
                if (speed == 1) {
                    // Quickly
                    this_thread::sleep_for(chrono::milliseconds(100));
                }
                else if (speed == 2) {
                    // Normally
                    this_thread::sleep_for(chrono::milliseconds(500));
                }
                else {
                    // Slowly
                    this_thread::sleep_for(chrono::seconds(1));
                }
            }
            cout << endl;
        }
    }
    
}