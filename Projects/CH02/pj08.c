/* Program calculates the remaining balance on a loan after the
 * first, second, and third monthly payments. 
 */

#include <stdio.h>

int main(void)
{
	float loan_amount, interest_rate, current_loan, interest_owed, monthly_payment, first_month, second_month, third_month;

	printf("Enter Loan Amount: ");
	scanf("%f", &loan_amount);

	printf("Enter Interest Amount (%5 = 5): ");
	scanf("%f", &interest_rate);

	printf("Enter Monthly Payment: ");
	scanf("%f", &monthly_payment);

	//first month calculation - using base loan amount
	interest_owed = loan_amount * (interest_rate/100) / 12;
	current_loan = loan_amount + interest_owed;
	first_month = current_loan - monthly_payment;
	printf("Balance remaining after first payment: %.2f\n", first_month); 
	
	//second month calculation - using total after first payment
	interest_owed = first_month * (interest_rate/100) / 12;
	current_loan = first_month+ interest_owed;
	second_month = current_loan - monthly_payment;
	printf("Balance remaining after second payment: %.2f\n", second_month);

	//third month calculation - using total after second payment
	interest_owed = second_month * (interest_rate/100) / 12;
	current_loan = second_month + interest_owed;
	third_month = current_loan - monthly_payment;
	printf("Balance remaining after second payment: %.2f\n", third_month);

	return 0;
}

	
