/*
 * File: intials.cc
 * ----------------
 *  This program  asks  for your name and that of your 
 *  significant other. It then prints out your initials.
 */

#include <iostream>
#include <string>

using namespace std;


int main () {
   cout << " Enter your first name: ";
   string first;
   cin >> first;
   cout << "Enter  your significant other's first name: ";
   string second;
   cin >> second;
   string initials = first.substr(0, 1) + "&" + second.substr(0, 1);
   cout << initials << endl;

   return 0;

}
