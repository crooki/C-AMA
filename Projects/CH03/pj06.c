//Program adds two fractions separated by a plus sign.

#include <stdio.h> 

int main(void)
{
	int num1, num2, denom1, denom2, num_sum, denum_sum;

	printf("Enter fraction separated by a plus sign: ");
	scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

	num_sum = (num1 * denom2) + (num2 * denom1);
	denum_sum = denom1 + denom2;
	printf("The sum is %d/%d\n", num_sum, denum_sum);
	return 0;

}

