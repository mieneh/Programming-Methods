/*-- Define a recursuve function to calculate the following expressions --*/

#include <stdio.h>
#include <math.h>

int caua(int n);
float caub(int n);
float somu(int n);
float caud(int n);
long giaithua(int n);
long cauc(int n);
long caue(int n);

int main ()
{
    int n = 0;
    printf(" Nhap n = ");
    scanf("%d", &n);

    printf(" a) Σ(2i + 1) = %d \n", caua(n));
    printf(" b) Σ(i/2) = %f \n", caub(n));
    printf(" c) Σ(i!) = %d \n", cauc(n));
    printf(" d) Σ(√i) = %f \n", caud(n));
    printf(" e) ∏(i!) = %d \n", caue(n));

    return 0;
}
int caua(int n)
{
    if(n == 1)
    {
        return 3;
    }
    return 2*n + 1 + caua(n - 1);
}
float caub(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return (float)n/2 + caub(n - 1);
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
long cauc(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    return n*giaithua(n - 1) + cauc(n - 1);
}
float caud(int n)
{
    if(n <= 0)
    {
        return 0;
    }
    return (float)(sqrt(n)) + caud(n - 1);
}
long caue(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    return n*giaithua(n - 1) * caue(n - 1);
}