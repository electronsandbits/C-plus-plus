/*
 * File:volume.cpp
 * ----------------
 * This program computes the volume(in liters) of a six-pack of soda
 * cans and the total volume of a six-pack and a two-litter bottle.
 */

#include <iostream>
using namespace std;

/* Constants */

const double CAN_VOLUME = 0.355;  /* Liters in a 12-ounce can */
const double BOTTLE_VOLUME = 2;   /* Two-liter bottle */

/* Main program */

int main() {
   int cansPerPack = 6;	
   double totalVolume = cansPerPack * CAN_VOLUME;

   cout << "A six-pack of 12-ounce cans contains "
	<< totalVolume  << " Liters." << endl; 

   totalVolume = totalVolume + BOTTLE_VOLUME;
   cout << "A six-pack and a two-liter bottle contains "
        << totalVolume  <<" Liters." << endl;
	
   return 0;

}


