#include <stdio.h>

/*
 * Write a program that computes the volume of a sphere with a 10-meter radius.
 * use the formula v = 4/3 * pi * r^3
 */

#define PI 3.1415

int main(void)
{
	int r = 10;
	float volume =  (4.0f/3.0f) * PI * (r * r * r);

	printf("Volume: %.2f \n", volume);

	return 0;
}

