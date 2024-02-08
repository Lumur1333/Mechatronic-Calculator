#include <iostream> //Input/Output stream
#include <thread> //Library for managing threads.
#include <cmath> //Library for math related functions.
#include <iomanip>

using namespace std;

void mechatronixCal() {

    char cUserSelection = ' ';
    char anyKey = ' ';
    double dVoltage = 0.0;
    double dCurrent = 0.0;
    double dResistance = 0.0;
    double dPower = 0.0;

    cout << "Mechatronix Calculator" << endl;

    // User input

        // Menu

        // Calculate Resistance (R) based on Voltage (V) and Current (I)
        // Calculate Voltage (V) based on Current (I) and Resistance (R)
        // Calculate Current (I) based on Voltage (V) and Resistance (R)
        cout << "Please select from menu Options below" << endl;
        cout << "R Selection: Calculate Resistance (R) based on Voltage (V) and Current (I)" << endl; // if the user inputs R you are going to query for voltage and current
        cout << "V Selection: Calculate Voltage (V) based on Current (I) and Resistance (R)" << endl; // if the user inputs V then we are querying for current and resistance
        cout << "I Selection: Calculate Current (I) based on Voltage (V) and Resistance (R)" << endl; // if the user inputs I then we are queerying for Voltage and Resistance
        cout << "P Selection: Calculate Power (P) based on Voltage (V) and Resistance (R)" << endl; // if the user enters P then we are querying for Voltage and Resistance

        cin >> cUserSelection;

        cUserSelection = std::toupper(cUserSelection); //Converts user selection to upper case.
        
        switch(cUserSelection)
        {
            case 'R':
                cout << "They have selected Resistance" << endl;

                cout << "Enter Voltage: " << endl;
                cin >> dVoltage;
                cout << "Enter Current: " << endl;
                cin >> dCurrent;
                cout << "The Resistance Would be:" << endl;

                dResistance = dVoltage / dCurrent;
                cout << setprecision(4) << dResistance << endl;

                cout << "Press any key followed by the enter button to continue to the menu..." << endl;
                cin >> anyKey; // Allows a pause in the program so user does not get flooded with information on screen.
                cout << endl;

                break;

            case 'V':
                cout << "They have selected Voltage" << endl;

                cout << "Enter Current: " << endl;
                cin >> dCurrent;
                cout << "Enter Resistance: " << endl;
                cin >> dResistance;
                cout << "The Voltage Would be:" << endl;

                dVoltage = dCurrent * dResistance;
                cout << setprecision(4) << dVoltage << endl;

                cout << "Press any key followed by the enter button to continue to the menu..." << endl;
                cin >> anyKey; // Allows a pause in the program so user does not get flooded with information on screen.
                cout << endl;
                
                break;

            case 'I':
                cout << "They have selected Current" << endl;

                cout << "Enter Voltage: " << endl;
                cin >> dVoltage;
                cout << "Enter Resistance: " << endl;
                cin >> dResistance;
                cout << "The Current Would be:" << endl;

                dCurrent = dVoltage / dResistance;
                cout << setprecision(4) << dCurrent << endl;

                cout << "Press any key followed by the enter button to continue to the menu..." << endl;
                cin >> anyKey; // Allows a pause in the program so user does not get flooded with information on screen.
                cout << endl;
                
                break;

            case 'P':
                cout << "They have selected Power" << endl;


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