/*-- Write a C program to enter any number and print its reverse. --*/

#include <stdio.h>
int sodaonguoc ();
int main ()
{
	int n;
	printf ("\n Nhap so can xet n = ");
	scanf ("%d", &n);

	printf (" So dao nguoc cua so %d la so %d \n ", n, sodaonguoc (n) );

	return 0;
}
int sodaonguoc (int n)
{
	int daonguoc = 0;
	while (n != 0)
	{
		daonguoc *= 10;
		daonguoc += n % 10;
		n /= 10 ;
	}
	return daonguoc;
}