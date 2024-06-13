/*-- Write a C program to convert Decimal to Binary number system. --*/

#include <stdio.h>
#include <math.h>
long long kiemtra ();
int main ()
{
    int decimal = 0;
    printf("\n So thap phan can chuyen doi = ");
    scanf("%d", &decimal);

    printf(" He nhi phan cua so thap phan %d = %d \n", decimal, kiemtra(decimal));
}
long long kiemtra (int decimal)
{
    long long binary = 0;
    int mu = 0;
    while (decimal > 0)
    {
        binary += (decimal % 2) * pow(10, mu);
        ++mu;
        decimal /= 2;
    }
    return binary;
}