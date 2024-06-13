/*-- Write a C program to count number of digits in any number. --*/

#include <stdio.h>
int main ()
{
    int n = 0;
    printf ("\n Nhap so can xet n = ");
    scanf ("%d", &n);

    int sodem = 0;
    int temp = n;

    do 
    {
        sodem ++;
        temp /= 10;  
    }
    while ( temp != 0 ); 
    printf (" So %d Co tong cong %d chu so. \n", n, sodem);
    
    return 0;
}
