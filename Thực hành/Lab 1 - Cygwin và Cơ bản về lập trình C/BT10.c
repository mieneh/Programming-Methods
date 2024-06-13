#include <stdio.h>
int main()
{
	/*-- Goi x la so can xet --*/
	int x ;
	printf("Nhap so x = ");
	scanf("%d", &x);
	
	/*-- Giai quyet thuat toan --*/
	if ( x % 2 == 0) {
		printf("So %d la so chan", x);
	}
	else {
		printf("So %d la so le", x);
	}
	
	return 0;
}
