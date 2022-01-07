/*
 * File: elevator.cc
 * -----------------
 * This program asks for the desired floor
 * and then prints out the actual floor.
 */

#include <iostream>
using namespace std;

int main(){
   int floor;
   cout << "Floor: ";
   cin  >> floor;
   int actualFloor;
   
   if (floor > 13) {
     actualFloor = floor - 1;
   } else {
      actualFloor = floor;
   }

   cout << "The elevator will travel to the actual floor " 
        << actualFloor << endl;
   
   return 0;

}
 

