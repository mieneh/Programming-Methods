#include <stdio.h>
int main()
{
	/*-- Nhap du lieu --*/
	int year = 0 ;	
	printf(" Nhap nam can kiem tra: ");
	scanf("%d", &year);
	
	/*-- Giai quyet thuat toan --*/
	if ( year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		printf(" %d la nam nhuan!", year);
	}
	else {
		printf("%d khong phai la nam nhuan!", year);
	}
	
	return 0;
}
