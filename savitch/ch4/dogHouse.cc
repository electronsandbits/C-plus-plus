/*
 * File:dogHouse.cc
 * ----------------
 * This program uses the predefined function sqrt. The program 
 * computes the size of the largest square dog house that can be built
 * for the amount of money the user is willing to spend.
 * The program asks the user for an amount of money and then determines
 * how many square feet of floor space can be purchased for that 
 * amount of money. That calculation yields an area in square feet for the 
 * floor area of the dog house.
 * @author Frank Funny
 * @version 2021
 */ 

#include <iostream>
#include <cmath>
using namespace std;

/* Constants */

const double COST_PER_SQ_FT = 10.50;

/* main program */

int main () {
   double budget, area, lengthSide;
   
   cout << "Enter the amount budgeted for your dog house: $";
   cin  >> budget;

   area = budget / COST_PER_SQ_FT;
   lengthSide = sqrt(area);

   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   cout << "For a price of $" << budget << endl
	<< "I can build you a luxurious square dog house\n"
        << "that is " << lengthSide
        << " feet on each side.\n";	

   return 0; 

}
