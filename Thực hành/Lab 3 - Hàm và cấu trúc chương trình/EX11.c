/*-- Write a C program to enter any number and check whether the number is palindrome or not. --*/

#include <stdio.h>

int kiemtra_palindrome ();
void xuat ();

int main ()
{
	int n = 0;
	printf ("\n Nhap so can kiem tra n = ");
	scanf ("%d", &n);

	int dieukien = kiemtra_palindrome (n);
	xuat (n, dieukien);
	return 0;
} 
int kiemtra_palindrome (int n)
{
	int sum = 0;
	int i = 0; 

	while (n > 0)  
	{  
		i = n % 10;  
		sum = (sum * 10) + i;  
		n /= 10;  
	}  
	return sum;
}
void xuat (int n, int dieukien)
{
	if (n == dieukien)
	{  
		printf (" So %d la so Palindrome! \n", n);  
	}
	else  
	{
		printf (" So %d khong phai la so Palindrome! \n", n);  
	}
}