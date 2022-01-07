

/* Constants */

const int NUMBER_OF_SCORES = 10;

/* Main program */

int main()  {
   double scores[NUMBER_OF_SCORES] = {32, 54, 67.5, 29, 34.5
               80, 115, 44.5, 100, 65 };	   

   /* Function's call - supply both the name of the array and the size */

   double totalScore = sum (scores, NUMBER_OF_SCORES);
}


/*
 * Function: sumArray.cc
 * Usage: double sum( values[], size);
 * -----------------------------------
 * This function computes the sum of all
 * elements in an array.
 */

double sum (double values[], int size)  {
    double total = 0;
    for (int i = 0; i < size; i++)  {
       total = total + values[i]; 
    }
    
    return total;
}
