//Program ask user to enter numbers 1-16 at random
//then it displays it in a 4x4 arrangement
// then it sums cols, rows, and diags.

#include <stdio.h>

int main(void)
{
	int row1_sum,row2_sum, row3_sum, row4_sum, col1_sum,col2_sum, col3_sum, col4_sum, diag1_sum, diag2_sum;
	int d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,
	    d12,d13,d14,d15,d16;

	printf("Enter the numbers 1 to 16 in any order: ");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &d1,&d2,&d3,&d4,&d5,&d6,&d7,&d8,&d9,&d10,&d11,&d12,&d13,&d14,&d15,&d16);

	//sum cols
	col1_sum = d1+d5+d9+d13;
	col2_sum = d2+d6+d10+d14;
	col3_sum = d3+d7+d11+d15;
	col4_sum = d4+d8+d12+d16;

	//sum rows
	row1_sum = d1 + d2 + d3 + d4;
	row2_sum = d5 + d6 + d7 + d8;
	row3_sum = d9 + d10 + d11 +d12;
	row4_sum = d13 + d14 + d15 + d16;
	
	//sum diags
	diag1_sum = d1 + d6 + d11 + d16;
        diag2_sum = d4 + d7 + d10 + d13;	

	printf("%.2d \t %.2d \t %.2d \t %.2d\n", d1,d2,d3,d4);
	printf("%.2d \t %.2d \t %.2d \t %.2d\n", d5,d6,d7,d8);	
	printf("%.2d \t %.2d \t %.2d \t %.2d\n", d9,d10,d11,d12);	
	printf("%.2d \t %.2d \t %.2d \t %.2d\n", d13,d14,d15,d16);	
	

	printf("Rows sums: %2.2d, %2.2d, %2.2d, %2.2d\n", row1_sum,row2_sum,row3_sum,row4_sum);
	printf("Cols sums: %2.2d, %2.2d, %2.2d, %2.2d\n", col1_sum,col2_sum,col3_sum,col4_sum);
	printf("Diag sums: %2.2d, %2.2d\n", diag1_sum, diag2_sum);

	return 0;
}
