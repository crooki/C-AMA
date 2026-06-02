// Program promtps user to enter a telephone number in the
// form (xxx) xxx-xxxx and displays in form xxx.xxx.xxxx

#include <stdio.h>

int main(void)
{
	int area_code, office_code, line_number;

	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &area_code, &office_code, &line_number);

	printf("%d.%d.%d\n", area_code, office_code, line_number);
	
	return 0;
}

