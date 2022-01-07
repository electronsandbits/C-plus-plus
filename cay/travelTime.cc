/*
 * File:travelTime.cc
 * ------------------
 *  This program compute the time that a robot requires 
 *  to retrieve an item from rocky terrrain.
 */
#include <iostream>
#include <cmath>
using namespace std;


int main() {

   /* Compute the distance alonf the x-axis */
   cout << "Distance to item along x-axis: ";
   double xDistance;
   cin >> xDistance;

   /* Compute the distance along y-axis */
   cout << "Distance to item along y-axis: ";
   double yDistance;
   cin >> yDistance;

   /* Compute the speed along segment1 */
   cout << "Length of segment 1: ";
   double segment1Length;
   cin >> segment1Length;
   cout << "Speed along segment1: ";

   /* Compute the speed along segment 2 */
   double segment1Speed;
   cin >> segment1Speed;
   cout << "Speed along segment2: ";
   double segment2Speed;
   cin >> segment2Speed;
 
   /* Compute the total time */
   double segment1Time = segment1Length / segment1Speed;
   double segment2Length = sqrt(pow(xDistance, 2) + (pow(yDistance - segment1Length, 2)));

   double segment2Time = segment2Length / segment2Speed;
   double totalTime  = segment1Time + segment2Time;

   cout << "Total time: " << totalTime << endl;
   		   
   return 0;
   
}

