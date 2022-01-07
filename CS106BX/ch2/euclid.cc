/*
 * File: Euclid.cpp
 * ----------------
 * This program calculates the greatest common divisor of two numbers
 * by applying Euclid's algorithm.
 */

#include <iostream>
using namespace std;

/* Function prototypes */

int gcd(int x, int y);

/* Main program */

int main ()  {
   cout << "Program to compute the greatest commom divisor." << endl;
   int x, y;
   cout << "Enter x: ";
   cin >> x;
   cout << "Enter y: ";
   cin >> y;
   cout << "The gcd is " << gcd(x,y) << endl;

   return 0;
}

/*
 * Function: gcd
 * Usage: int g = gcd(x, y);
 * -------------------------
 * Computes the greatest common divisor using a recursive implementation
 * of Euclid's algorithm.
 */

int gcd(int x, int y)  {
   if  (x % y == 0)  {
      return y;
   } else {
      return gcd(y, x %y);
   }
}



