/*-- Write a C program to enter any number and check whether the number is palindrome or not. --*/

#include <stdio.h>

int kiemtra_palindrome ();
void xuat ();

int main ()
{
	int n = 0;
	printf ("\n Nhap so can kiem tra n = ");
	scanf ("%d", &n);

	int temp = n;
	int sum = 0;
	int i = 0; 

	while (temp > 0)  
	{  
		i = temp % 10;  
		sum = (sum * 10) + i;  
		temp /= 10;  
	}  
	if (n == sum)
	{  
		printf (" So %d la so Palindrome! \n", n);  
	}
	else  
	{
		printf (" So %d khong phai la so Palindrome! \n", n);  
	}
	return 0;
} 