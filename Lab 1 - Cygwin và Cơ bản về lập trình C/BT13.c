#include <stdio.h>
int main()
{
	/*-- Goi a, b, c, d ,e la diem 5 mon can xet --*/
	float a, b, c, d, e;
	printf("Nhap diem cac mon tren thang diem 10:\n");
	
	printf("Ly = ");
	scanf("%f",&a);
	
	printf("Hoa = ");
	scanf("%f",&b);
	
	printf("Sinh = ");
	scanf("%f",&c);
	
	printf("Toan = ");
	scanf("%f",&d);
	
	printf("Tin = ");
	scanf("%f",&e);
	
	/*-- Giai quyet thuat toan --*/
	float percentage = ( a + b + c + d + e ) / 5 * 10;
	printf("Percentage = %.2f %% -> ", percentage);
	
	if (percentage > 90) {
		printf("Grade A");
	}
	else if (percentage > 80) {	
		printf("Grade B");
	}	
	else if (percentage > 70) {
		printf("Grade C");
	}	
	else if (percentage > 60) {
		printf("Grade D");
	}	
	else if (percentage > 40) {
		printf("Grade E");
	}	
	else if (percentage < 40) {	
	printf("Grade F");
	}
	else {
		printf;
	}

	return 0;
}
