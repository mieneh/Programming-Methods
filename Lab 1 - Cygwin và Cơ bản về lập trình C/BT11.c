#include <stdio.h>
int main()
{
	/*-- Nhap du lieu --*/
	char kitu;	
	printf("Nhap mot ki tu bat ki: ");
	scanf("%c", &kitu);
	
	/*-- Giai quyet thuat toan --*/
	if ( kitu >= 'a' && kitu <= 'z' || kitu >= 'A' && kitu <= 'Z' || kitu >= '0' && kitu <= '9' ) {
		printf("Ki tu %c phai la alphanumeric ", kitu);
	}
	else {
		printf("Ki tu %c khong phai la alphanumeric ", kitu);
	}
		
	return 0;
}
