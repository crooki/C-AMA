#include <stdio.h>

/*
 * Write a program that computes the volume of a sphere with a 10-meter radius.
 * use the formula v = 4/3 * pi * r^3
 */

#define PI 3.1415

int main(void)
{
	float r = 0; 	//initialize radius var	
	printf("Enter radius of sphere: ");
	scanf("%f", &r); //ask for user input
	
	float volume = PI * (r * r * r) * (4.0f/3.0f); //define volume
	printf("Volume: %.2f \n", volume); 
	return 0;

}
