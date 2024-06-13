/*-- Write a C program to check whether a number is Armstrong number or not. --*/

#include <stdio.h>
int main ()
{
	int n = 0;
	printf ("\n Nhap so n = ");
	scanf ("%d", &n);

	int temp = n;
	int sum = 0;
	int i = 0;

	while (temp > 0)
	{
		i = temp % 10;
		sum += (i*i*i); 
		temp /= 10;
	}
	if (n == sum)
		printf (" So %d la mot so Armstrong! \n", n);
	else
		printf (" So %d khong la mot so Armstrong! \n", n);
	
	return 0;
}