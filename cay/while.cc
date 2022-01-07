/*
 * File: while.cc
 * --------------
 * This program illustrates a simple while loop.
 */

#include <iostream>

using namespace std;

int main () {
   int n = 1;
   while (n < 100) {
      n = 2 * n;
     cout << n << "  " << endl; 
   }
}
   
