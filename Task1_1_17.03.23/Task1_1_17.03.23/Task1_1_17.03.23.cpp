/*Task1. Write a program that displays a line on the screen with a given symbol, vertical or horizontal,
and the line can be displayed quickly, normally and slowly. Communication with the user can be organized through the menu.

The task did not have a condition what values should user enter, so I made two versions of the program. 
Here is the first one (simple), where the program works as long as the user enters the correct data.
An error is expected if the user enters an incorrect number for the "direction" and "speed" fields. 
But if you enter a letter or a symbol in the indicated fields, endless loop starts, because the int does not accept anything but numbers. 
I tried to deal with this problem in the second version of the task called "Task1_1_17.03.23 (2)".  */

#include <iostream>
#include "windows.h"
#include <string>

using namespace std;

int main()
{
	cout << "You can display the line vertical or horizontal, and quickly, normally and slowly.\nEnter 0 in symbol value for exit." << endl; // Simple interface

	int  direction, speed; 
	string symbol;

	// Endless loop
	while (true) {
		// User enters symbol
		cout << "\nEnter the symbol to build the line: "; cin >> symbol;

		if (symbol[0] == '0') { // Exit program

			break;
		}

		// User enters direction
		cout << "Choose direction: 1 - vertical; 2 - horizontal -> "; cin >> direction;

			// Check if direction is valid
			if ((direction != 1) && (direction != 2)) {

				cout << "Wrong value!" << endl;
			}
			else {
				// Vertical direction
				if (direction == 1) {

					// User inputs speed
					cout << "Select speed: 1 - quickly; 2 - normally; 3 - slowly -> "; cin >> speed;

					// Check if speed value is correct
					if ((speed != 1) && (speed != 2)&& (speed != 3)) {

						cout << "Wrong value!" << endl;
					}


					if (speed == 1) {

						for (int i = 0; i <= 10; i++) { // quickly

							cout << symbol << endl;
							Sleep(50);
						}
					}

					if (speed == 2) { // normally

						for (int i = 0; i <= 10; i++) {

							cout << symbol << endl;
							Sleep(500);
						}
					}
					if (speed == 3) { // slowly

						for (int i = 0; i <= 10; i++) {

							cout << symbol << endl;
							Sleep(1000);
						}
					}

				}
				else { // Horizontal direction

					// Check if speed value is correct
					cout << "Select speed: 1 - quickly; 2 - normally; 3 - slowly -> "; cin >> speed;
					if ((speed != 1) && (speed != 2) && (speed != 3)) {

						cout << "Wrong value!" << endl;
					}


					if (speed == 1) {

						for (int i = 0; i <= 10; i++) { // quickly

							cout << symbol;
							Sleep(50);
						}
					}
					if (speed == 2) {// normally

						for (int i = 0; i <= 10; i++) {

							cout << symbol;
							Sleep(500);
						}
					}
					if (speed == 3) {// slowly

						for (int i = 0; i <= 10; i++) {

							cout << symbol;
							Sleep(1000);
						}
					}


				}
			}
		
	}
}