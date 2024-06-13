/*-- Write a C program to print sum of all odd number between 1 to n by using three loop structures. 
Validating the input, in case the input isn't correct, prompt user to enter it again --*/

#include <stdio.h>

int loop_for ();
int loop_while ();
int loop_do_while ();

int main ()
{
	int n = 0;
	printf ("\n Nhap n = ");
	scanf ("%d", &n);
	if (n >= 0)
	{
		printf (" Tong cac so le tu 1 den %d theo vong for = %d \n", n, loop_for (n) );
		printf (" Tong cac so le tu 1 den %d theo vong lap while = %d \n", n, loop_while (n) );
		printf (" Tong cac so le tu 1 den %d theo vong lap do...while = %d \n", n, loop_do_while (n) );
	}
	else
	{
		printf (" Vui long nhap lai so n ");
	}
	
    return 0;
}
int loop_for (int n)
{
	int i = 1;
	int sum = 0;
	for (i = 1 ; i <= n; i++)
	{
		if (i % 2 == 1)
			sum += i;
	}
	return sum;
}
int loop_while (int n)
{
	int i = 1;
	int sum = 0;
	while (i <= n)
	{
		if (i % 2 == 1)
		{
			sum += i;
		}
		i++;
	}
	return sum;
}
int loop_do_while (int n)
{
	int i = 1;
	int sum = 0;
    do 
    { 
        if (i % 2 == 1)
        {
            sum += i;
        }
        i++; 
    } 
    while (i <= n);
	return sum;
}	