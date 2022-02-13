/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  	float mark1,mark2,avg;
	
	printf(" \tEnter mark 1 = ");
	scanf("%f",&mark1);
	
	printf(" \tEnter mark 2 = ");
	scanf("%f",&mark2);
	
	avg = (mark1 + mark2)/2;
	
	printf(" \tAverage of the two marks = %.2f",avg);
  return 0;
}

