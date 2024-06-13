/*-- Write a C program to check whether a number is Armstrong number or not. --*/

#include <stdio.h>

int kiemtra_Armstrong ();
void xuat ();

int main ()
{
	int n = 0;
	printf ("\n Nhap so can kiem tra n = ");
	scanf ("%d", &n);

	int dieukien = kiemtra_Armstrong (n);
	xuat (n, dieukien);
	return 0;
} 
int kiemtra_Armstrong (int n)
{
	int sum = 0;
	int i = 0; 

	while (n > 0)  
	{  
		i = n % 10;
		sum += (i*i*i); 
		n /= 10;  
	}  
	return sum;
}
void xuat (int n, int dieukien)
{
	if (n == dieukien)
	{  
		printf (" So %d la so Armstrong! \n", n);  
	}
	else  
	{
		printf (" So %d khong phai la so Armstrong! \n", n);  
	}
}