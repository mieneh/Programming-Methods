#include <stdio.h>
int main()
{
	/*-- Goi a, b, c la 3 so can xet --*/
	int a, b, c, max; 
	
	printf(" Nhap a = ");
	scanf("%d",&a);
	
	printf(" Nhap b = ");
	scanf("%d",&b);
	
	printf(" Nhap c = ");
	scanf("%d",&c);
	
	/*-- Giai quyet thuat toan --*/
	max = a;
	if (b > max) 
		max = b;
	if (c > max)
		max = c;	
	printf(" Max(%d, %d, %d) = %d ",a ,b ,c ,max);
	
	return 0;
}
