//Program ask user to enter ISBN and it displays it broken down:
//GS1 Prefix - Group Identifier - Publisher Code - Item Number - check digit

#include <stdio.h>

int main(void)
{
	int gs1_prefix, group_id, publisher_code, item_number, check_digit;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group_id, &publisher_code, &item_number, &check_digit);

	printf("GS1 Prefix: %d\n", gs1_prefix);
	printf("Group Identifier: %d\n", group_id);
	printf("Publisher Code: %d\n", publisher_code);
	printf("Item number: %d\n", item_number);
	printf("Check digit: %d\n", check_digit);

	return 0;
}

