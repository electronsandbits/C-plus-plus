/*
 * File:tiles.cc
 * -------------
 *  A row of black ans white tiles needs to be placed 
 *  along a wall. For aesthetic reasons, the architect
 *  has specified that the first ans last tile shall e black.
 *  
 *  This program computes the number of tiles needed and the gap
 *  at each end.
 */


#include <iostream>
using namespace std;

int main() {
   
   cout << "This program computes the number of tiles and gap." << endl;	
   int totalWidth = 100;
   int tileWidth = 5;
   
   int pairs = (totalWidth - tileWidth)  /  (2 * tileWidth);
   int tiles = 1 + 2 * pairs;
   double gap = (totalWidth - tiles * tileWidth) / 2;
   cout << "The number of tiles needed is: " << pairs << endl;
   cout << "The number of gap needed is :"   << gap  << endl;
   
  return 0;

}
