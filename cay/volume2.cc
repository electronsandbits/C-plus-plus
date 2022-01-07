/*
 * File:volume2.cc
 * ---------------
 * This program prompts the user to enter the price for 
 * a six-pack  and the volume of each can, then print out
 * the price per ounce.
 *
 */


 #include <iostream>
 #include <iomanip>
 using namespace std;


/* Constants */

const double CANS_PER_PACK = 7;


/* Main Program */

int main() {

   /* Read price per pack */
   cout << "Please enter the price for a six-pack: ";
   double packPrice;
   cin >> packPrice;
   
   /* Read can volume */

   cout << "Please enter the volume for each can (in ounces): ";
   double canVolume;
   cin >> canVolume;

   /* Compute pack volume */

   double packVolume = canVolume * CANS_PER_PACK;

   /* Compute and print price per ounce */
   
   double pricePerOunce = packPrice / packVolume;
   
   cout << fixed << setprecision(2);
   cout << "Price per ounce: " << pricePerOunce << endl;

   return 0;

}
