/*-- Write a C program to print all Perfect numbers between 1 to n by using three loop structures. 
Validating the input, in case the input isn't correct, prompt user to enter it again. --*/

#include <stdio.h>
void in_so_Perfect ();
int main ()
{
	int socanxet = 0;
	printf ("\n Nhap so can xet N = ");
	scanf ("%d", &socanxet);

	if (socanxet > 0)
	{
		printf (" Tat ca so Perfect tu 1 den %d la ", socanxet);
		in_so_Perfect (socanxet);
	}
	else
	{  
		printf (" So %d khong du dieu kien de xet so Perfect, vui long nhap lai. \n", socanxet);  
	}

	return 0;
}  
void in_so_Perfect (int socanxet)
{
	int n;
	for (n = 1; n <= socanxet; n++)
	{
		int temp = n; 
		int sum = 0;
		int i = 1;
	
		while (temp > i)  
		{  
			if (temp % i == 0)
				sum += i;  
			i++;  
		}
		if (n == sum)
		{
			printf ("\t %d", n);
			
		}	
	}
	printf ("\n");
}