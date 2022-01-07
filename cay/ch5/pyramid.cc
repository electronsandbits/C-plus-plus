/*
 * File:pyramidVolume.cpp
 * ----------------------
 * This program determines the volume of a piramid,
 * given its height and base length. 
 */

#include <iostream>
using namespace std;

/* Function prototypes */

double pyramidVolume(double height, double baseLength);


/* Main program */

int main() {
   cout << "Volume :" << pyramidVolume(9, 10) << endl;
   cout << "Expected: 300" << endl;
   cout << "Volume : " << pyramidVolume(0, 10) << endl;
   cout << "Expected: 0" << endl;

   return 0;
}


/*
 * Function:pyramidVolume
 * Usage:pyramidVolume(a, b);
 * --------------------------
 *  Returns the pyramid volume.
 */
 
 double pyramidVolume (double height, double baseLength) {
     double baseArea = baseLength * baseLength;
     
     return height * baseArea / 3;
  }
