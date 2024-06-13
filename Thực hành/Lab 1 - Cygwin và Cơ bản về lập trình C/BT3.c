#include <stdio.h>
int main()
{
	/*-- Goi a va b lan luot la chieu dai va chieu rong cua hinh chu nhat --*/
	int a, b;
	
	printf("Nhap chieu dai a = ");
	scanf("%d",&a);
	
	printf("Nhap chieu rong b = ");
	scanf("%d",&b);
	
	/*-- Giai quyet thuat toan --*/
	float P, S;
	printf("Chu vi hinh chu nhat: P = %.2f dvdt\n", P=(a+b)*2);
	printf("Dien tich hinh chu nhat: S = %.2f dvdt", S=a*b);
	
	return 0;
}
