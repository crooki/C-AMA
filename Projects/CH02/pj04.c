/* Program ask user to enter dollars-and-cents amount
 * then display amount with a 5% tax added.
 */

#include <stdio.h>

int main(void)
{
	float user_dollar_amount = 0, tax = 0.05f;
	
	printf("Enter amount: ");
	scanf("%f", &user_dollar_amount); //prompt user for dollar amount
	
	float total = ((user_dollar_amount * tax) + user_dollar_amount); //define total amount
	
	printf("With 5-percent tax added: %.2f\n", total);
	return 0;
}
