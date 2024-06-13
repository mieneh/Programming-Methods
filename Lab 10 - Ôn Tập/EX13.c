#include<stdio.h>
int main()
{
    int n, giay, phut, gio = 0;
    printf("\n Nhap so giay la mot so nguyen, n = ");
    scanf("%d", &n);
    gio = n / 3600;
    phut = (n % 3600) / 60;
    giay = n % 3600 % 60;
    printf(" %d gio %d phut %d giay", gio, phut, giay);
    return 0;
}

    
