/*-- Write a C program to check whether a number is Prime number or not.
Validating the input, in case the input isn't correct, prompt user to enter it again. --*/

#include <stdio.h>
#include <math.h>

int kiemtra_Prime ();
void xuat ();

int main ()
{
	int n = 0;
	printf ("\n Nhap so can kiem tra n = ");
	scanf ("%d", &n);
    if(n >= 2) 
    {
        int dieukien = kiemtra_Prime (n);
        xuat (n, dieukien);
    }
    else
    {
        printf(" So %d khong du dieu kien de xet so Prime, vui long nhap lai \n", n);;
    }
    return 0;
} 
int kiemtra_Prime (int n)
{
	int i = 2;
    int songuyento = 1;
	for (i = 2 ; i <= sqrt(n) ; i++)
	{
		if (n % i == 0)
		{
			songuyento = 0;
		}
   }
	return songuyento;
}
void xuat (int n, int dieukien)
{
	if (dieukien == 1)
	{  
		printf (" So %d la so Prime! \n", n);  
	}
	else  
	{
		printf (" So %d khong phai la so Prime! \n", n);  
	}
}