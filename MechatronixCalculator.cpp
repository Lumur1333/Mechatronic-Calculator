/*===============================================================================================================

 Author: Lucas Murdock

 Date: 03Feb2024

 Student #: 200304037

 Code Description: This C++ program serves as a "Mechatronics Calculator."

 It allows users to perform calculations related to Ohm's Law and electrical circuits.

===============================================================================================================*/

#include <iostream> // Library for Input/Output stream.
#include <thread> // Library for managing threads.
#include <cmath> // Library for math related functions.
#include <iomanip> // Library for manipulating Input/Output formatting.
#include <ctype.h> // Library for allowing character transformation to Upper case letters.

using namespace std;

// Function to get a valid menu selection from the user.
char getMenuSelection() {
    char userSelection;
    do {
        // Menu options for user
        cout << "Please select from menu Options below" << endl;
        cout << "R Selection: Calculate Resistance (R) based on Voltage (V) and Current (I)" << endl;
        cout << "V Selection: Calculate Voltage (V) based on Current (I) and Resistance (R)" << endl;
        cout << "I Selection: Calculate Current (I) based on Voltage (V) and Resistance (R)" << endl;
        cout << "P Selection: Calculate Power (P) based on Voltage (V) and Resistance (R)" << endl;

        //User input and validation
        cin >> userSelection;
        userSelection = toupper(userSelection); // Convert to upper case

        // If statement to prevent the user from breaking the program by selecting a incorrect character.
        if (!(userSelection == 'R' || userSelection == 'V' || userSelection == 'I' || userSelection == 'P')) {
            cout << "Invalid selection. Please choose R, V, I, or P." << endl;
            cout << endl;
        }

    } while (!(userSelection == 'R' || userSelection == 'V' || userSelection == 'I' || userSelection == 'P'));

    return userSelection;
}

// Function to get a valid menu selection from the user for the Power menu.
char getPowerMenuSelection() {
    char pUserSelection;
    do {
            //Power menu options for user
            cout << "They have selected Power" << endl;
            cout << "Select A: This is if you have Voltage and Current" << endl;
            cout << "Select B: This is if you have Current and Resistance" << endl;
            cout << "Select C: This is if you have Voltage and Resistance" << endl;

            // User input and validation
            cin >> pUserSelection;
            pUserSelection = toupper(pUserSelection); // Convert to upper case

            // If statement to prevent the user from breaking the program by selecting a incorrect character.
            if (!(pUserSelection == 'A' || pUserSelection == 'B' || pUserSelection == 'C')) {
                cout << "Invalid selection. Please choose A, B, or C." << endl;
                cout << endl;
            }

        } while (!(pUserSelection == 'A' || pUserSelection == 'B' || pUserSelection == 'C'));

    return pUserSelection;
}

void mechatronixCal() {

    double dVoltage, dCurrent, dResistance, dPower;

    cout << "Mechatronix Calculator" << endl;

        switch(getMenuSelection())
        {
            case 'R':
                cout << "They have selected Resistance" << endl;

                while (true) {
                    cout << "Enter Voltage: ";
                    if (cin >> dVoltage) {
                        break; // Valid input, exit the loop
                    } else {
                        //Invalid input handling
                        cin.clear(); // Clear error flag
                        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                        cout << "Invalid input. Please enter a valid numeric value for Voltage." << endl;
                    }
                }

                while (true) {
                    cout << "Enter Current: ";
                    if (cin >> dCurrent) {
                        break; // Valid input, exit the loop
                    } else {
                        //Invalid input handling
                        cin.clear(); // Clear error flag
                        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                        cout << "Invalid input. Please enter a valid numeric value for Current." << endl;
                    }
                }

                cout << "The Resistance Would be:" << endl;

                dResistance = dVoltage / dCurrent;
                cout << fixed << setprecision(4) << dResistance << " Ohms" << endl;

                cout << endl;

            break;

            case 'V':
                cout << "They have selected Voltage" << endl;

                while (true) {
                    cout << "Enter Current: ";
                    if (cin >> dCurrent) {
                        break; // Valid input, exit the loop
                    } else {
                        //Invalid input handling
                        cin.clear(); // Clear error flag
                        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                        cout << "Invalid input. Please enter a valid numeric value for Current." << endl;
                    }
                }

                while (true) {
                    cout << "Enter Resistance: ";
                    if (cin >> dResistance) {
                        break; // Valid input, exit the loop
                    } else {
                        //Invalid input handling
                        cin.clear(); // Clear error flag
                        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                        cout << "Invalid input. Please enter a valid numeric value for Resistance." << endl;
                    }
                }

                cout << "The Voltage Would be:" << endl;

                dVoltage = dCurrent * dResistance;
                cout << fixed << setprecision(4) << dVoltage << " Volts" <<endl;

                cout << endl;
                
            break;

            case 'I':
                cout << "They have selected Current" << endl;

                while (true) {
                    cout << "Enter Voltage: ";
                    if (cin >> dVoltage) {
                        break; // Valid input, exit the loop
                    } else {
                        //Invalid input handling
                        cin.clear(); // Clear error flag
                        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                        cout << "Invalid input. Please enter a valid numeric value for Voltage." << endl;
                    }
                }

                while (true) {
                    cout << "Enter Resistance: ";
                    if (cin >> dResistance) {
                        break; // Valid input, exit the loop
                    } else {
                        //Invalid input handling
                        cin.clear(); // Clear error flag
                        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                        cout << "Invalid input. Please enter a valid numeric value for Resistance." << endl;
                    }
                }

                cout << "The Current Would be:" << endl;

                dCurrent = dVoltage / dResistance;
                cout << fixed << setprecision(4) << dCurrent << " Amps" << endl;

                cout << endl;
                
            break;

            case 'P':
                
                switch(getPowerMenuSelection()) {

                    case 'A':

                    while (true) {
                        cout << "Enter Voltage: ";
                        if (cin >> dVoltage) {
                            break; // Valid input, exit the loop
                        } else {
                            //Invalid input handling
                            cin.clear(); // Clear error flag
                            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                            cout << "Invalid input. Please enter a valid numeric value for Voltage." << endl;
                        }
                    }

                    while (true) {
                        cout << "Enter Current: ";
                        if (cin >> dCurrent) {
                            break; // Valid input, exit the loop
                        } else {
                            //Invalid input handling
                            cin.clear(); // Clear error flag
                            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                            cout << "Invalid input. Please enter a valid numeric value for Current." << endl;
                        }
                    }

                        cout << "The power would be: " << endl;

                        dPower = dVoltage * dCurrent;
                        cout << fixed << setprecision(4) << dPower << " Watts" << endl;

                        cout << endl;


                    break;

                    case 'B':

                        while (true) {
                            cout << "Enter Current: ";
                            if (cin >> dCurrent) {
                                break; // Valid input, exit the loop
                            } else {
                                //Invalid input handling
                                cin.clear(); // Clear error flag
                                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                                cout << "Invalid input. Please enter a valid numeric value for Current." << endl;
                            }
                        }

                        while (true) {
                            cout << "Enter Resistance: ";
                            if (cin >> dResistance) {
                                break; // Valid input, exit the loop
                            } else {
                                //Invalid input handling
                                cin.clear(); // Clear error flag
                                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                                cout << "Invalid input. Please enter a valid numeric value for Resistance." << endl;
                            }
                        }

                        cout << "The power would be: " << endl;

                        dPower = pow(dCurrent, 2) * dResistance;
                        cout << fixed << setprecision(4) << dPower << " Watts" << endl;

                        cout << endl;

                    break;

                    case 'C':

                        while (true) {
                            cout << "Enter Voltage: ";
                            if (cin >> dVoltage) {
                                break; // Valid input, exit the loop
                            } else {
                                //Invalid input handling
                                cin.clear(); // Clear error flag
                                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                                cout << "Invalid input. Please enter a valid numeric value for Voltage." << endl;
                            }
                        }

                        while (true) {
                            cout << "Enter Resistance: ";
                            if (cin >> dResistance) {
                                break; // Valid input, exit the loop
                            } else {
                                //Invalid input handling
                                cin.clear(); // Clear error flag
                                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                                cout << "Invalid input. Please enter a valid numeric value for Resistance." << endl;
                            }
                        }

                        cout << "The power would be: " << endl;

                        dPower = pow(dVoltage, 2) / dResistance;
                        cout << fixed << setprecision(4) << dPower << " Watts" << endl;

                        cout << endl;

                    break;

            }

            break;

            default :
                cout << "Invalid Input" << endl;
               
            break;
        }
}

// Main function of code
int main() {
    char cContinueFlag = 'Y';
    // Introduction message
    cout << "Welcome to the World's greatest Ohms Law Calculator" << endl;

    do {

        cout << "Let's do a calculation" << endl;
        mechatronixCal(); //Calls function in program.

        cout << "Want to run the program again? (y) for yes, (n) for no...." << endl;
        cin >> cContinueFlag;
        cout << endl;
        // Ask if the user wants to continue

    } while (cContinueFlag == 'Y' || cContinueFlag == 'y');

    return 0; //Program end point.

}