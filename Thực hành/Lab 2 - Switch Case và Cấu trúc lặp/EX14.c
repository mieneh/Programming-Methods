/*-- Write a C program to check whether a number is Perfect number or not. --*/

#include <stdio.h>
int main ()
{
	int n = 0;
	printf ("\n Nhap so can xet n = ");
	scanf ("%d", &n);

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
		printf (" So %d la so Perfect! \n", n);  
	}
	else  
	{
		printf (" So %d khong phai la so Perfect! \n", n);  
	}

	return 0;
} 