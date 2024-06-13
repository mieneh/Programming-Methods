/*-- Write a C program to calculate product of digits of any number. --*/

#include <stdio.h>
int main ()
{
    int n = 0;
    printf ("\n Nhap so can xet n = ");
    scanf ("%d", &n);

    long int tich = 1; 
    int sotach = 0;
    int temp = n;
    
    while (temp != 0)
    {
        sotach = temp % 10;
        tich *= sotach;
        temp /= 10;
    }    
    printf (" Tich so tach ra cua so %d la %d \n", n, tich );
    
    return 0;
}