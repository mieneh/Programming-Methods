/*-- Define a recursive function to compute x^n --*/

#include<stdio.h>
int mu(int x, int n);
int main()
{
    int n, x = 0;
    printf(" Nhap so x = ");
    scanf("%d", &x);

    printf(" Nhap so mu n = ");
    scanf("%d", &n);

    printf(" %d ^ %d = %d", x, n, mu(x, n));
    return 0;
}
int mu(int x, int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return x*mu(x, n - 1);
    }
}
     
