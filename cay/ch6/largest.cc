/*
 * File: largest.cc
 * ----------------
 * This program finds the largest value in an input sequence.
 */

#include <iostream>
using namespace std;

/* Constants */

const int CAPACITY = 1000;

/* Main program */

int main() {
   double values[CAPACITY];
   int currentSize = 0;
  
   cout << "Please enter values, Q to quit:" << endl;
   double input;
   while (cin >> input) {
      if (currentSize < CAPACITY) {
        values[currentSize] = input;
        currentSize++;
      } 
   }	      
   double largest = values[0];
   for (int i = 1; i < currentSize; i++) {
      if (values[i] > largest)  {
        largest = values[i];
      }	       
   }

   for (int i = 0; i < currentSize; i++ )  {
      cout << values[i];
      if (values[i] == largest)  {
	cout << " <== largest value ";      
      }
      cout << endl;
   }
  
   return 0;

}
