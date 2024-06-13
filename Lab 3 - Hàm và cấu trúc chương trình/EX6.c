/*-- Write a C program to calculate sum of digits of any number. --*/

#include <stdio.h>
int tong ();
int main ()
{
    int n = 0;
    printf ("\n Nhap so can xet n = ");
    scanf ("%d", &n);
    
    printf (" Tong so tach ra cua so %d la %d \n", n, tong(n) );
    
    return 0;
}
int tong (int n)
{
    int tong = 0; 
    int sotach = 0;
    
    while (n != 0)
    {
        sotach = n % 10;
        tong += sotach;
        n /= 10;
    }
    return tong;
}