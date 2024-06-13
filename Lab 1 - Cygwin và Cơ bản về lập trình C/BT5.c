#include <stdio.h>
int main()
{		
	/*-- Nhap du lieu --*/
	float C, F;
	printf("Do C can doi: ");
	scanf("%f",&C);
	
	/*-- Giai quyet thuat toan --*/
	F = C*1.8 + 32;
	printf(" Vay %f do C = %.1f do F", C, F);
	
	return 0;
} 
