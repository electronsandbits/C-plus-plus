/*
 * File:investment.cc
 * ------------------
 * This program solves the investment problem.
 * You put $10,000 into a bank account that earns 
 * 5 percent interest per year. How many years does it take 
 * for the account balance to be double the original investment.
 */

#include <iostream>
using namespace std;

/* Constants */

const double RATE = 5;
const double INITIAL_BALANCE = 10000;
const double TARGET  = 2 * INITIAL_BALANCE;

/* Main Program */

int main() {
   double balance = INITIAL_BALANCE;
   int year = 0;
  
   while (balance < TARGET) {
      year++;
      double interest = balance * RATE / 100;
      balance = balance + interest;
   }

   cout << "The investment doubled after " << year << " years." << endl;

   return 0;
   
}


