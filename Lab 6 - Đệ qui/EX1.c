/*-- Define a recursive function that check whether a number is prime --*/

#include <stdio.h>
int kiemtra(int n, int i);
int main ()
{
    int n = 0;
    printf (" Nhap so can xet n = ");
    scanf ("%d", &n);

    int soPrime = kiemtra(n, n / 2);
    printf (" Ket qua:");
    if ( soPrime == 1 )
    {
        printf (" %d la so Prime! ", n);
    }
    else 
    {
        printf (" %d khong la so Prime! ", n);
    }
    return 0;
}
int kiemtra(int n, int i)
{

    if (i == 1)
    {
        return 1;
    }
    else
    {
        if (n % i == 0)
        {
            return 0;
        }
        else
        {
            return kiemtra(n, i - 1);
        }
    }
}