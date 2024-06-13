/*-- Define a recursive function to compute factorial of n --*/

#include <stdio.h>
long giaithua(int n);
int main ()
{
    int n = 0;
    printf(" Nhap n = ");
    scanf("%d", &n);

    printf(" %d! = %d ", n, giaithua(n));
    return 0;
}
long giaithua(int n)
{
    if (n == 0 )
    {
        return 1;
    }
    else
    {
        return n*giaithua(n - 1);
    }
}