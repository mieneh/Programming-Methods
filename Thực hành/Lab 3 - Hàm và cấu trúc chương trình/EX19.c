/*-- Write a C program to compute the Factorial of n: n! = 1.2.3.....n. (n 20) 
Validating the input, in case the input isn't correct, prompt user to enter it again.  --*/

#include <stdio.h>
int dieukien ();
int main ()
{	
	int n = 0;
	printf ("\n Nhap so can xet n = ");
	scanf ("%d", &n);
	
	if ( n >= 0)	
	{
		
		printf (" Giai thua cua so %d = %d \n ", n, dieukien(n) );
	}
	else
	{
		printf (" So %d khong du dieu kien de xet so Prime, vui long nhap lai. \n", n);
	}
	return 0;
}
int dieukien (int n)
{
	int i = 1;
	long long giaithua = 1;
	for (i = 1 ; i <= n ; i++)
	{
		giaithua *= i;
	}
	return giaithua;
}