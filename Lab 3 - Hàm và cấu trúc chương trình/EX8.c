/*-- Write a C program to count number of digits in any number. --*/

#include <stdio.h>
int sochuso ();
int main ()
{
    int n = 0;
    printf ("\n Nhap so can xet n = ");
    scanf ("%d", &n);
 
    printf (" So %d co tong cong %d chu so. \n", n, sochuso (n) );
    
    return 0;
}
int sochuso (int n)
{
    int sodem = 0;
    do 
    {
        sodem ++;
        n /= 10;  
    }
    while ( n != 0 );
    return sodem;
}