/*-- Write a C program to print all Armstrong numbers between 1 to n by using three loop structures. 
Validating the input, in case the input isn't correct, prompt user to enter it again. --*/

#include <stdio.h>
void in_so_Armstrong ();
int main ()
{
	int socanxet = 0;
	printf ("\n Nhap so can xet N = ");
	scanf ("%d", &socanxet);

	if (socanxet > 0)
	{
		printf (" Tat ca so Armstrong tu 1 den %d la ", socanxet);
		in_so_Armstrong (socanxet);
	}
	else
	{  
		printf (" So %d khong du dieu kien de xet so Armstrong, vui long nhap lai. \n", socanxet);  
	}
}
void in_so_Armstrong (int socanxet)
{	
	int n;
	for (n = 1; n <= socanxet; n++)
	{	
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
		{
			printf ("\t %d", n);
		}
	}
	printf ("\n");
}