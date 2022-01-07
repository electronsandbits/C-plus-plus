/*
 * File: vending.cc
 * ----------------
 *  This program simulates a vending machine.
 *  A customer selects an ite for purchase and inserts 
 *  a bill into the vending machine. The vending machine 
 *  dispenses the purchased item and gives change.
 */

#include <iostream>
#include <iomanip>

using namespace std;

/* Constants */
const int PENNIES_PER_DOLLAR = 100;
const int PENNIES_PER_QUARTER = 25;

/* Main Program */

int main () {

   cout << "Enter bill value (1 = $1 bill, 5 = $5 bill, etc.): ";
   int billValue;
   cin >> billValue;
   cout << "Enter item price in pennies: ";
   int itemPrice;
   cin >> itemPrice;

   int amountDue = PENNIES_PER_DOLLAR * billValue - itemPrice;
   int dollarCoins = amountDue / PENNIES_PER_DOLLAR;
   amountDue = amountDue % PENNIES_PER_DOLLAR;
   int quarters = amountDue / PENNIES_PER_QUARTER;

   cout << "Dollar coins: "  << setw(6) << dollarCoins << endl
        << "Quarters:     " << setw(6) << quarters    << endl;

}

