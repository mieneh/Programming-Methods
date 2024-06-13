/*-- Nhap cac goc cua tam giac xem tam giac do co ton tai hay khong? --*/

#include <stdio.h>
int main()
{
	/*-- Goi a, b, c la cac goc can xet cua tam giac --*/
	float a, b, c;                     
	
	/*-- Giai quyet thuat toan --*/
	printf(" Nhap goc AB = ");
	scanf("%f", &c);
	
	printf(" Nhap goc AC = ");
	scanf("%f", &b);
	
	printf(" Nhap goc BC = ");
	scanf("%f", &a);

	if ( a + b + c == 180 && a != 0 && b != 0 && c != 0 ) {
		printf(" - > Day la mot tam giac ");
	}
	else {
		printf(" - > Day khong phai la mot tam giac ");
	}
	
	return 0;
}
