/* ****************************************************************
 * @author: <your name here>
 * @app name: <your application name here>
 * @app desc: <describe the purpose of your application here>
 * @history:
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************

    string username;
    string password;
    string address;
    
    cout << "Name: ";
    getline (cin,username);

    cout << "Password: ";
    getline (cin,password);

    cout << "Address: ";
    getline (cin,address);

    cout << "\"Hi, I am " << username << ". I live at " << address << ".\"" << endl;


    // ********************  DO NOT CHANGE ***********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************

    cout << endl;
    system ("PAUSE");
    return EXIT_SUCCESS;
}
