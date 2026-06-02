//Program formats product information entered by user

#include <stdio.h>

int main(void)
{
	int item_number, p_day, p_month, p_year;
	float unit_price;
	printf("Enter item number: ");
	scanf("%d", &item_number);

	printf("Enter unit price: ");
	scanf("%f", &unit_price);

	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &p_month,&p_day,&p_year);


	printf("Item \t\t Unit \t\t Purchase\t\n");
	printf("\t\t Price \t\t Date \t\n");
	printf("%-5d \t\t $%7.2f \t %.2d/%.2d/%d\n", item_number, unit_price, p_month, p_day, p_year);
	return 0;
}
