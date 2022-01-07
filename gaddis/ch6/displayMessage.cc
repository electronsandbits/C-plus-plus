/*
 * File: displayMessage.cpp
 * ------------------------
 * This program has two functions: main and displayMessage.
 */

#include <iostream>
using namespace std;

/* Function prototypes */

void displayMessage();


/* Main program */

int main() {
   cout << "Hello from main." << endl;
   displayMessage();  /* Function's call */
   cout << "Back in function main again." << endl;

   return 0;

}

/*
 * Function: displayMessage()
 * Usage: displayMessage();
 * --------------------------
 * This function display a greeting.
 */

void displayMessage() {
   cout << "Hello from the function displayMessage." << endl;
   
}

