/*-- Write a C program to print all Prime numbers between 1 to n by using three loop structures. 
Validating the input, in case the input isn't correct, prompt user to enter it again. --*/

#include <stdio.h>
int kiemtra_Prime ();
int main ()
{
	int n = 0;
	printf ("\n Nhap so can xet N = ");
	scanf ("%d", &n);
	printf (" Tat ca so Prime tu 1 den %d la ", n);
	if (n >= 2)
  	{
		
    kiemtra_Prime(n);
	}
    else
    {
        printf(" So %d khong du dieu kien de xet so Prime, vui long nhap lai \n", n);
    }
    return 0;
} 
int kiemtra_Prime (int n)
{
	int i, j = 2;
    int songuyento = 1;
	for (i = 2 ; i <= n ; i++)
	{
		songuyento = 1;
		for (j = 2 ; j <= i/2 ; j++)
		{
			if (i % j == 0)
			{
				songuyento = 0;
				break;
			}
		}
		if (songuyento == 1)
		{
			printf("\t %d", i);
		}
	}
}