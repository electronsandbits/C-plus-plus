/*
 * File: earnings.cc
 * -----------------
 * This program shows the pay-calculating algorithm. The program
 * will prompt the user to enter the number of hours worked, and
 * the hourly pay rate and then display the earnings.
 */

#include <iostream>
using namespace std;

int main() {
   cout << "This program calculates the user's pay." << endl;
   double hours, rate, pay;

   /* Get the number of hours worked. */
   cout << "How many hours did you work? " ;
   cin >> hours;

   /* Get the hourly pay rate */
   cout << "How much do you get paid per hour?";
   cin >> rate;

   /* Calculate the pay */
   pay = hours * rate;

   /* Display the pay */
   cout << "You have earned $" << pay << endl;

   return 0;

}   

