/*-- Write a C function to swap first and last digits of any number. --*/

#include <stdio.h>
#include <math.h>
int main ()
{
    int n = 0;
    printf ("\n Nhap so can xet n = ");
    scanf ("%d", &n);
    printf (" Vi tri ban dau: %d \n", n);

    int temp = n;
    int socuoicung = temp % 10;
    int somu = log10(temp);
    while (temp > 9)
    {
        temp /= 10;
    }
    int sodautien = temp;
    int doivitri = (socuoicung * pow(10, somu) + sodautien) + (n - (sodautien * pow(10, somu) + socuoicung));
    printf (" Vi tri sau khi doi cho: %d \n", doivitri);

    return 0;
}
