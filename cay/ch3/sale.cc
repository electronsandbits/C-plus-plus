/*
 * File:sale.cc
 * ------------
 * The university bookstore has a Kilobyte Day sale every
 * October 24, giving an 8 percent discount on all computer
 * acessory purchases if the price is less than $128, and 
 * a 16 percent discount if the price is at least $128. 
 * Write a program that asks the cashier for the original price 
 * and then prints the discounted price.
 */
#include <iostream>
#include <iomanip>
using namespace std;


int main(){
   cout << "Please enther the original price before discount:$ ";
   double originalPrice;
   cin >> originalPrice;

   double discountRate;
   if  (originalPrice < 128) {
      discountRate = 0.92;
   } else {
      discountRate = 0.84;
   }
   double discountedPrice = discountRate * originalPrice;
   cout << "Discounted price : " << fixed << setprecision(2)
	<< discountedPrice << endl;

   return 0;
}



