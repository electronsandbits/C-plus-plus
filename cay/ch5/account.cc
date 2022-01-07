/*
 * File: account.cc
 * ----------------
 * This program simulates withdrawing given amount of money from a bank 
 * account, provided that sufficient funds are available.If the amount
 * of money  is insufficient, a $10 penalty is deducted instead.
 */ 

#include <iostream> 
using namespace std;

/*Function prottotypes */

void withdraw (double & balance, double amount);

/* Constants */
const double PENALTY = 10;

/* Main program */

int main() {
   double wiltoldAccount = 1000;
   double saniyyahAccount = 500;
   
   withdraw(wiltoldAccount, 100); /* Now wiltoldAccount is 900 */
   withdraw(wiltoldAccount, 1000); /* Insufficient funds. Now wiltoldAccount is 890 */
   withdraw(saniyyahAccount, 150);

   cout << "wiltold's account: "  << wiltoldAccount    << endl;
   cout << "Saniyyah's account: " << saniyyahAccount  << endl;
   
   return 0;
}


/*
 * Function: withdraw()
 * Usage: withdraw (x,y );
 * -----------------------
 * Withdraws the amount from the given balance, or withdraws
 * a penalty if the balance is insufficient.
 */

void withdraw (double & balance, double amount) {
   if  (balance >= amount ) {
      balance = balance -amount;
   } else {
      balance = balance -PENALTY;	   
   }

}
