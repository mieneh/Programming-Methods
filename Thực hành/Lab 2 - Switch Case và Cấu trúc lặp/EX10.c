/*-- Write a C program to enter any number and print its reverse. --*/

#include <stdio.h>
int main ()
{
	int n;
	printf ("\n Nhap so can xet n = ");
	scanf ("%d", &n);

	int temp = n;
	int daonguoc = 0;
	while (temp != 0)
	{
		daonguoc *= 10;
		daonguoc += temp % 10;
		temp /= 10 ;
	}
	printf (" So dao nguoc cua so %d la so %d \n ", n, daonguoc);

	return 0;
}