/*
 * File:char1.c
 *  -----------
 * This program will shoew how characters are treated as small
 * integers, and, conversevely, how small integers are treated as 
 * characters.
 */

#include <stdio.h>



int main () {
   char c;
   int i;
  
   for (i = 'a'; i <= 'z'; ++i)  {
      printf("%c", i);  /* abc ... z is printed */
   }
 
   for (c = 65; c <= 90; ++c) {  /* ABC ... A is printed */
      printf("%c", c);
   }
 
   for (c = '0'; c <= '9'; ++c) {
      printf("%d ", c);           /* 48 49 ... 57 is printed */
    }


    return 0;

}   
