#include <stdio.h>

int main()
{
	float C, F;
	printf("Enter temperture in C: ");
	scanf("%f",&C);
	F= C*9/5+32;
	printf("%.1f C = %.1f F", C,F);
	
	
}
