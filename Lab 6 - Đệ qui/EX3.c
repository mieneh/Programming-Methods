/*-- Define a recursive function to compute 2^n --*/

#include <stdio.h>
int bacn(int n);
int main ()
{
    int n = 0;
    printf(" Nhap n = ");
    scanf("%d", &n);

    printf(" 2 ^ %d = %d ", n, bacn(n));
    return 0;
}
int bacn(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return 2*bacn(n - 1);
    }
}