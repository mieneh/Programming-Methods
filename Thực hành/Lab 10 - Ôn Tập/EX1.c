#include <stdio.h>
#include <math.h>
int main()
{
    float d, xa, ya, xb, yb = 0;
    printf("\n Nhap x cua diem A, x = ");
    scanf("%f", &xa);
    printf(" Nhap y cua diem A, y = ");
    scanf("%f", &ya);
    printf(" Nhap x cua diem B, x = ");
    scanf("%f", &xb);
    printf(" Nhap y cua diem B, y = ");
    scanf("%f", &yb);

    d = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
    printf("\n Khoang cach giua 2 diem A, B la d = %f \n", d);
    
    return 0;
}