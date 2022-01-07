/*
 * File:cube.cpp
 * -------------
 * This program computes the volume of a cube.
 */

#include <iostream>
using namespace std;

/* Function prototypes */

double cubeVolume(double sideLength);

/* Main program */

int main() {
   double result1 = cubeVolume(2);   /* Function's call */ 
   double result2 = cubeVolume(10);  /* Function's call */

   cout << "A cube with side length 2 has volume  " << result1 << endl;
   cout << "A cube with side length 10 has volume " << result2 << endl;

   return 0; 
}  

/*
 * Function:cubeVolume
 * Usage:sideLength();
 * -------------------
 *  Returns the cube of a volume.
 */

  double cubeVolume (double sideLength) { 
      double volume = sideLength * sideLength * sideLength;

      return volume;
  }    

