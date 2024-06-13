/*-- Write a C program to calculate product of digits of any number. --*/

#include <stdio.h>
int tich ();
int main ()
{
    int n = 0;
    printf ("\n Nhap so can xet n = ");
    scanf ("%d", &n);
    
    printf (" Tich so tach ra cua so %d la %d \n", n, tich (n) );
    
    return 0;
}
int tich (int n)
{
    long int tich = 1; 
    int sotach = 0;
    
    while (n != 0)
    {
        sotach = n % 10;
        tich *= sotach;
        n /= 10;
    }
    return tich;
}