#include <stdio.h>
int main()
{	
	/*-- Goi a va b la 2 so can xet --*/
	int a, b, max;
	
	printf(" Nhap a = ");
	scanf("%d",&a);
	
	printf(" Nhap b = ");
	scanf("%d",&b);
	
	/*-- Giai quyet thuat toan --*/
	max = ( a > b) ? a : b ;
	printf(" Max(%d,%d) = %d ",a ,b, max);
	
	return 0;
}
