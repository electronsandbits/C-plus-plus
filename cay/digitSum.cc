/* 
 * File: DigitSum.cc
 * -----------------
 * This program sums the digit in a positive integer.
 * The program depends on the fact that last digit of
 * an integer n is given by n % 10 and the number consisting
 * of all but the last digit us given by the expression n /10.
 */

#include <iostream>

using namespace std;

int main () {
   int n = 1729;
   int sum = 0;
   while (n > 0) {
      int digit  = n % 10;
      sum = sum + digit;
      n = n / 10;
   }

   cout << sum  << endl;

}



