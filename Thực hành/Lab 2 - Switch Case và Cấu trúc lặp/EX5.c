/*-- Write a C program to find first and last digits of any number. --*/

#include <stdio.h>
int main ()
{
    int n = 0;
    printf ("\n Nhap so can xet: n = ");
    scanf ("%d",&n);

    int temp, sodautien, socuoicung = 0;

    temp = n;
    while (temp > 9)
    {
        temp /= 10;
    }
    sodautien = temp;

	temp = n;
	socuoicung = temp % 10;

    printf (" So dau tien cua so %d la %d \n", n, sodautien);
	printf (" So cuoi cung cua so %d la %d \n", n, socuoicung);

    return 0;
}