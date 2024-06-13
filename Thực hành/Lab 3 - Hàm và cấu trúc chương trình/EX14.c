/*-- Write a C program to check whether a number is Perfect number or not. --*/

#include <stdio.h>

int kiemtra_Perfect ();
void xuat ();

int main ()
{
	int n = 0;
	printf ("\n Nhap so can kiem tra n = ");
	scanf ("%d", &n);

	int dieukien = kiemtra_Perfect (n);
	xuat (n, dieukien);
	return 0;
} 
int kiemtra_Perfect (int n)
{
	int sum = 0;
	int i = 1; 

	while (n > i)  
	{  
		if (n % i == 0)
			sum += i;  
		i++;  
	} 
	return sum;
}
void xuat (int n, int dieukien)
{
	if (n == dieukien)
	{  
		printf (" So %d la so Perfect! \n", n);  
	}
	else  
	{
		printf (" So %d khong phai la so Perfect! \n", n);  
	}
}