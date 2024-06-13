#include<stdio.h>
long nhiphan(int n);
int main()
{
    int n = 0;
    printf("\n Nhap so nguyen duong: ");
    scanf("%d", &n);

    printf(" He nhi phan cua so %d la %d", n, nhiphan(n));

    return 0;
}

long nhiphan(int n)
{
    long int m = 0;
    if(n == 0)
    {
        return 0;
    }
    else
    {
        m = n % 2;
        return nhiphan(n / 2)*10 + m;
    }
}