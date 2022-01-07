/*
 * File: functions.cc
 * ------------------
 * This program reads value from standard input, doubles
 * them, and prints the result. 
 * 
   Reads a sequence of floating-point numbers.
   @ param inputs an array containing the numbers
   @ param capacity the capacity of that array
   @ return the number of inputs stored in the array

*/   

#include <iostream>
using namespace std;

/* Functions prototypes */

int readInputs(double inputs[], int capacity);
void multiply(double values[], int size, double factor);
void print(double values[], int size);

/* Constants */

const int CAPACITY = 1000;

/* Main program */

int main() {
   double values[CAPACITY];

   /* Function's call */
   int size = readInputs(values, CAPACITY);
   multiply (values, size, 2);
   print (values, size);

   return 0;
}


/* 
 * Function: readInputs()
 * Usage: double (values, capacity);
 * ---------------------------------
 * This function fills an array with the input values.
 * It returns the number of elements that were read.
 */

int readInputs(double inputs[], int capacity) {
  int currentSize = 0;
  cout << "Please enter values, Q to quit: " << endl;
  bool more = true;

  while (more) {
     double input;
     cin >> input;

     if  (cin.fail()) {
        more = false;
     } else if (currentSize < capacity) {
	inputs[currentSize] = input;     
        currentSize++;    
     } 

  }
  return currentSize;

}

/**
 * Function:multiply()
 * Usage: multiply(values, size, factor);
 * ---------------------------------------
 * The multiply function modifies the contents of the 
 * array that it receives, demonstrating that array are passed
 *  by reference.
 *
    Multiples all elements of an array by a factor.
    @param values a partially filled array
    @param size the number of elements in values
    @param factor the value with which each element is 
    multiplied
*/  

void multiply (double values[], int size, double factor) {
   for (int i = 0; i < size; i++) {
      values[i] = values[i] * factor;
   }
}


/**
 * Function: print()
 * Usage: print(values, size);
 * -----------------------------
 *  The print function does not modify the contentes
 *  of the array that it receives.
 *
    Prints the elements of a vector, separated by commas.
    @param values a partially filled array
    @param size the number of elements in values
*/

void print(double values[], int size) {
   for (int i = 0; i < size; i++) {
      if (i > 0)  {  cout << ", " ; }  {
       cout << values[i]; 
      }   
   }   
   cout << endl;
}	

