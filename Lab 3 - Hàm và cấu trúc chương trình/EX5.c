/*-- Write a C program to find first and last digits of any number. --*/

#include <stdio.h>

int sodautien ();
int socuoicung ();

int main ()
{
    int n = 0;
    printf ("\n Nhap so can xet: n = ");
    scanf ("%d",&n);

    printf (" So dau tien cua so %d la %d \n", n, sodautien(n) );
	printf (" So cuoi cung cua so %d la %d \n", n, socuoicung(n) );

    return 0;
}
int sodautien (int n)
{
    int sodautien = 0;
    while (n > 9)
    {
        n /= 10;
    }
    return sodautien = n;
}
int socuoicung (int n)
{
    int socuoicung = 0;
	return socuoicung = n % 10;
}