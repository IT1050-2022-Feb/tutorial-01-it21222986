/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int s1 , s2   ;
  float avg ;

  printf ("Enter subject 1 marks : ");
  scanf ("%d" , &s1);

  printf ("Enter subject 2 marks : ");
  scanf ("%d" , &s2);

  avg = (s1 + s2) / 2 ;

  printf ("Average mark is : %lf" , avg) ; 

  
  return 0;
}

