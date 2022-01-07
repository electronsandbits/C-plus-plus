/*
 * File: temperature.cc
 * --------------------
 * This program takes a Fahrenheit as input and outputs the 
 * equivalent Celsius temperature. A Fahrenheit temperature F can be 
 * converted to an equivalent Celsius temperature C as follows: 
 * C = (5.0 / 9) (F -32)
 */

#include <iostream>
using namespace std;


/* Function prototypes */

void initializeScreen();
double celsius(double fahrenheit);
void showResults(double fDegrees, double cDegrees);

/* Main program */

int main() {
   double fTemperature, cTemperature;

   initializeScreen();
   cout << " I will convert a Fahrenheit temperature to Celsius.\n"
	<< " Enter a temperature in Fahrenheit: ";
   cin >> fTemperature;

   cTemperature = celsius(fTemperature);
   showResults(fTemperature, cTemperature);    

   return 0;

}

/*
 * Fuunction: initializeScreen
 * Usage: initializeScreen();
 * ---------------------------
 * Separate current output from the output of the previously run program.
 */

void initializeScreen() {
   using namespace std;	
   cout << endl;
   return ;
}

/* 
 * Function: celsius
 * Usage: 
 * -----------------
 * Converts a Fahrenheit temperature to a Celsius temperature.
 */

double celsius (double fahrenheit) {
     return ((5.0 /9.0 ) * (fahrenheit - 32));
}

/*
 * Function: showResults
 * Usage:
 * ---------------------
 * Display output. Assumes that cDegrees Celsius is equivalent 
 * to fDegrees  Fahrenheit.
 */

void showResults(double fDegrees, double cDegrees) {
   using namespace std;
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(1);
   cout << fDegrees
	<< " degrees Fahrenheit is equivalent to \n"
        << cDegrees << " degrees Celsius.\n";
   return ;   
}
