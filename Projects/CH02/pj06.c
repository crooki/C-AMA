/* Modified version of pj05.c 
 */

#include <stdio.h>

int main(void)
{
	float total, x = 0;

	printf("Enter value for x: ");
	scanf("%f", &x);

	total = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

	printf("Total value of polynomial: %.2f \n", total);
	return 0;
}
