/*-- Write a C program to enter any number and calculate sum of all natural numbers between 1 to n by using three loop structures. 
Validating the input, in case the input isn't correct, prompt user to enter it again --*/

#include <stdio.h>
int main ()
{ 
	int n = 0;
	printf ("\n Nhap so can xet: n = ");
	scanf ("%d", &n);
    
    int i = 1;
	int sum = 0;

	if ( n >= 0 )
	{
    /*-- Vong lap: for --*/
        for ( i = 1; i <= n; i++ )
        { 
            sum += i; 
        }
        printf (" Tong cac so tu 1 den %d theo vong lap for = %d \n", n, sum );

    /*-- Vong lap: while --*/
		while ( i <= n )
		{
			sum += i;
			i++;
		} 
		printf (" Tong cac so tu 1 den %d theo vong lap while = %d \n", n, sum );

	/*-- Vong lap: do...while --*/  
		do 
		{ 
			printf (" Tong cac so tu 1 den %d theo vong lap do...while = %d \n", n, sum ) ;
			sum += i;
			i++; 
		} 
		while ( i <= n ); 
	}
	else
	{
		printf (" Vui long nhap lai so n \n");
	}
	
	return 0; 
}