/*-- Write a C program to print sum of all odd number between 1 to n by using three loop structures. 
Validating the input, in case the input isn't correct, prompt user to enter it again --*/

/*-- Vong lap: while --*/

#include <stdio.h>
int main ()
{
	int n = 0;
	printf (" Nhap n = ");
	scanf ("%d", &n);
	
	if ( n >= 0 )
	{
		int i = 1;
		int sum = 0;
		while ( i <= n )
		{
			if ( i % 2 == 1 )
			{
				sum += i;
			}
			i++;
		}
		printf(" Tong cac so le tu 1 den %d theo vong lap while = %d \n", n, sum );
	}
	else
	{
		printf (" Vui long nhap lai so n ");
	}
	
    return 0;
}