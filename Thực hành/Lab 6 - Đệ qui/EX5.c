/*-- Define a recursive function to return the number of digits of a positive integer number --*/

#include <stdio.h>
int sochuso(int n);
int main ()
{
    int n = 0;
    printf (" Nhap n = ");
    scanf ("%d", &n);

    printf (" So chu so cua so %d la %d", n, sochuso(n));
    return 0;
}
int sochuso(int n)
{
    if (n >= 0 && n <= 9)
    {
        return 1;
    }
    else
    {
        return (1 + sochuso(n/10));
    }
}