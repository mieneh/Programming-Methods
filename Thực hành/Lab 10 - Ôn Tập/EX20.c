#include <stdio.h>

int caua(int n);
int caub(int n);
float cauc(int n);

int main()
{
    int n = 0;
    printf("\n Nhap n = ");
    scanf("%d", &n);
    printf(" Σ(2n + 1) = %d \n", caua(n));
    printf(" Σ(n! + 1) = %d \n", caub(n));
    printf(" Σ((2n + 1)/n) = %f \n", cauc(n));
    return 0;
}

int caua(int n)
{
    int i, sum = 0;
    for(i = 0; i <= n; i++)
    {
        sum += 2*i + 1;
    }
    return sum;
}

int caub(int n)
{
    int i = 0;
    int sum = 2;
    int giaithua = 1;
    for(i = 1; i <= n; i++)
    {
        giaithua *= i;
        sum += giaithua + 1;
    }
    return sum;
}
float cauc(int n)
{
    int i = 0;
    float sum = 0;
    for(i = 1; i <= n; i++)
    {
        sum += (float)(2*i + 1)/i;
    }
    return sum;
}