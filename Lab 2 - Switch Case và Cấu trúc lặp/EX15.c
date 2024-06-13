/*-- Write a C program to print all Prime numbers between 1 to n by using three loop structures. 
Validating the input, in case the input isn't correct, prompt user to enter it again. --*/

#include <stdio.h>
int main ()
{
	int socanxet = 0;
	printf ("\n Nhap so can xet N = ");
	scanf ("%d", &socanxet);
	
	if (socanxet >= 2)
  	{
		printf (" Tat ca so Prime tu 1 den %d la ", socanxet);
        int i, j = 2;
        int songuyento = 1;
		for (i = 2 ; i <= socanxet ; i++)
		{
			songuyento = 1;
			for(j = 2 ; j <= i/2 ; j++)  
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
		printf ("\n");
	}
	else
	{  
		printf (" So %d khong du dieu kien de xet so Prime, vui long nhap lai. \n", socanxet);  
	}

	return 0;
} 