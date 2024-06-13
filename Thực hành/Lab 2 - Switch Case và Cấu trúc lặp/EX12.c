/*-- Write a C program to check whether a number is Prime number or not.
Validating the input, in case the input isn't correct, prompt user to enter it again. --*/

#include <stdio.h>
#include <math.h>
int main ()
{
	int n = 0;
	printf ("\n Nhap so can kiem tra n = ");
	scanf ("%d", &n);
	
    if(n >= 2) 
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
		if (songuyento == 1)
		{  
			printf (" So %d la so Prime! \n", n);  
		}
		else  
		{
			printf (" So %d khong phai la so Prime! \n", n);  
		}
	}
    else
    {
        printf(" So %d khong du dieu kien de xet so Prime, vui long nhap lai \n", n);;
    }
    return 0;
}