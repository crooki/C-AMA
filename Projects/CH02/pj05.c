/* Ask user to enter value for x
 * then display value of : 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 
 */

#include <stdio.h>

int main(void) 
{
	float total, x = 0;

	printf("Enter a value for x: ");
	scanf("%f", &x); 		//prompt user for x-val
	
	total = 3 * (x * x * x * x * x) + 
		2 * (x * x * x * x) -
		5 * (x * x * x) -
		1 * (x * x) +
		7 * (x) - 6; // brute-force calc total
	
	printf("Total value of polynomial: %0.2f \n", total);
	
	return 0;
}

