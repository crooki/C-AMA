// Program accepts a date in mm/dd/yyyy and returns it as yyyymmdd

#include <stdio.h>

int main(void)
{
	int day, month, year;

	printf("Enter Date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);


	printf("You entered the date: %d%.2d%.2d\n",year, month, day);
	return 0;
}
