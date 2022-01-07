/*
 * File: babyNames.cpp
 * -------------------
 *
 *
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/* Function prototypes */

void processName(ifstream & infile, double & total);

/* Main program */

int main() {
   ifstream infile;
   infile.open("babynames.txt");
   if (infile.fail())  { /* Check for failure after opening */
     return 0; 
   }

   double boyTotal = 50;
   double girlTotal = 50;

   while (boyTotal > 0 || girlTotal > 0 ) {
      int rank;
      infile >> rank;
      if (infile.fail()) {
        return 0;
      }
      cout << rank << " ";

      processName(infile, boyTotal);
      processName(infile, girlTotal);

      cout << endl;
   }

   return 0;
}

/*
 * Function: processName()
 * Usage: processName(infile, );
 * -----------------------------
 *  Reads name information, prints the name if 
 *  total >= 0, and adjusts the total.
 *  @param infile the input stream
 *  @param total the total percentage that should stil be processed
 */

void processName(ifstream & infile, double & total) {
   string name;
   int count;
   double percent;
   infile >> name >> count >> percent;

   if (infile.fail()) {  /* Check for failure after each input */
     return;
   }
   if (total > 0)  {
     cout << name << " "; 
     total = total - percent;
   }
}
