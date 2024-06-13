#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*-- Goi x la so can xet --*/
	int x;
	printf("Nhap x = ");
	scanf("%d", &x);
	
	/*-- Giai quyet thuat toan --*/
	x = abs(x);
	printf("Gia tri tuyet doi cua x = %d",x);
	 
	return 0;
}
