#include <stdio.h>
int main()
{
	/*-- Goi a va b la 2 so nguyen can xet --*/
	int a, b;
		
	printf("So nguyen a = ");
	scanf("%d",&a);
	
	printf("So nguyen b = ");
	scanf("%d",&b);
	
	/*-- Giai quyet thuat toan --*/
	int tong = a + b;
	printf("%d + %d = %d\n", a, b, tong);
	
	int	hieu = a - b;
	printf("%d - %d = %d\n", a, b, hieu);
	
	long int tich = a * b;
	printf("%d * %d = %d\n", a, b, tich);
	
	float thuong = (float) a / b;
	printf("%d / %d = %.2f\n", a, b, thuong);
	
	int r = a % b;
	printf("%d chia lay du %d = %d", a, b, r);
	
	return 0;
}
