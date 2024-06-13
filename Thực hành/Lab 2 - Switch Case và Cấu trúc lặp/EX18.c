/*-- Write a C program to convert Decimal to Binary number system. --*/

#include <stdio.h>
#include <math.h>
int main ()
{ 
    int demical = 0;
    printf ("\n Nhap so thap phan can chuyen doi = ");
    scanf ("%d", &demical);

    long int binary = 0;
    int so_mu = 0;
    int temp = demical;
    while (temp > 0)
    {   
        binary += (temp % 2) * pow (10, so_mu);
        ++ so_mu;
        temp /= 2;
    }
    printf (" Vay he nhi phan cua so %d = %d \n", demical, binary);
    return 0;
}