/*
 * File: newVal.cc
 * ---------------
 *  This program illustrates passing and using reference parameters.
 */ 
 
#include <iostream>
using namespace std;

/* Function prototypes */

void newVal(double &, double & );

/* Main program */

int main() {
   double firstNum, secNum;

   cout << "Enter two numbers: ";
   cin >> firstNum >> secNum;
   cout << "\nThe value in firstNum is: " << firstNum << endl;
   cout << "The value in secNum is: "     << secNum   << "\n\n";

   newVal(firstNum, secNum); /* Function's call */

   cout << "The value in firstNum is now: "  << firstNum << endl;
   cout << "The value in secNum is now: "    << secNum   << endl;

   return 0;
}


/*
 * Function: newVal();
 * Usage:
 * -------------------
 */
 
void newVal (double & xnum, double & ynum) {
    cout << "The value in xnum is: " << xnum << endl;
    cout << "The value in ynum is: " << ynum << endl;

    xnum = 89.5;
    ynum = 99.5;

    return;
}
