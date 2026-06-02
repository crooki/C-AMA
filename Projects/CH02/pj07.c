/* Program that prompts user to enter a dollar amount and show how to pay
 * said amount using the smallest number of 20, 10, 5, 1 dollar bills.
 */

#include <stdio.h>

int main(void)
{
	int dollar_amount, remainder, bill_20, bill_10, bill_5, bill_1;

	printf("Enter Dollar Amount: ");
	scanf("%d", &dollar_amount);

	bill_20 = dollar_amount / 20;

	remainder = dollar_amount - (bill_20 * 20);

	bill_10 = remainder / 10;

	remainder = remainder - (bill_10 * 10);

	bill_5 = remainder / 5;

	remainder = remainder - (bill_5 * 5);

	bill_1 = remainder / 1;
	
	printf("Here is the breakdown: \n");
	printf("$20 Bills: %d\n", bill_20);
	printf("$10 Bills: %d\n", bill_10);
	printf(" $5 Bills: %d\n", bill_5);
	printf(" $1 Bills: %d\n", bill_1);

	return 0; 
}

