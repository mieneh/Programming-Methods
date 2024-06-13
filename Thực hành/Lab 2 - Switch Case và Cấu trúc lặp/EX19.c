/*-- Write a C program to compute the Factorial of n: n! = 1.2.3.....n. (n 20) 
Validating the input, in case the input isn't correct, prompt user to enter it again.  --*/

#include <stdio.h>
int main ()
{	
	int n = 0;
	printf ("\n Nhap so n = ");
	scanf ("%d", &n);
	if ( n >= 0)	
	{
		int i = 1;
		int giaithua = 1;
		for (i = 1 ; i <= n ; i++)
		{
			giaithua *= i;
		}
		printf (" Giai thua cua so %d = %d \n ", n, giaithua);
	}
	else
	{
		printf (" So %d khong du dieu kien de xet so Prime, vui long nhap lai. \n", n);
	}
	return 0;
}