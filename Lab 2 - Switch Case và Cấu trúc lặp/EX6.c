/*-- Write a C program to calculate sum of digits of any number. --*/

#include <stdio.h>
int main ()
{
    int n = 0;
    printf ("\n Nhap so n = ");
    scanf ("%d", &n);

    int tong = 0; 
    int sotach = 0;
    int temp = n;

    while (temp != 0)
    {
        sotach = temp % 10;
        tong += sotach;
        temp /= 10;
    }    
    printf (" Tong so tach ra cua so %d la %d \n", n, tong );
    
    return 0;
}