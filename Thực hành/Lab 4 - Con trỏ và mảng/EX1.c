/*-- Write functions to calculate the following expressions --*/

#include <stdio.h>

void nhapmang (int A[], int n);   
void xuatmang (int a[], int n);

float cau_a (int A[], int n);     
int cau_b (int A[], int n);
int cau_c (int A[], int n);
int cau_d (int A[], int n);
float cau_e (int A[], int n);
   
int main ()
{
    int A[100];
    int n = 0;
    do 
    {   
        printf ("\n Nhap so luong phan tu su dung trong mang A[n] = ");
        scanf ("%d", &n);
        printf ("\n");
    }
    while (n <= 0);

    nhapmang (A, n);

    printf ("\n Mang A[n] sau khi nhap la: \n");
    xuatmang (A, n);

    printf ("\n Tong cac phan tu cau a = %.1f \n", cau_a(A, n));
    printf (" Tong cac phan tu cau b = %d \n", cau_b(A, n));
    printf (" Tong cac phan tu cau c = %d \n", cau_c(A, n));
    printf (" Tich cac phan tu cau d = %d \n", cau_d(A, n));
    printf (" Tich cac phan tu cau e = %.1f \n", cau_e(A, n));
   
    return 0;
}
void nhapmang (int A[], int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        printf (" Nhap gia tri phan tu A[%d] = ", i);
        scanf ("%d", &A[i]);
    }
}
void xuatmang (int A[], int n)
{
    int i = 0;
    for (i = 0 ; i < n ; i++)
    {
        printf (" %d  ", A[i]);
    }
}
float cau_a (int A[], int n)
{
    int i = 0;
    float sum;
    for (i = 1; i < n; i++)
    {
        sum = + (A[i] / 2);
    }
    return sum;
}
int cau_b (int A[], int n)
{
    int i = 0;
    float sum = 0;
    for (i = 1; i < n; i++)
    {
        sum += (A[i]*2 + 1) ;
    }
    return sum;
}
int cau_c (int A[], int n)
{
    int i = 0;
    long sum = 0;
    long giaithua = 1;
    for (i = 1; i < n; i++)
    {
        giaithua *= A[i];
        sum += (giaithua + 1);
    }
    return sum;
}
int cau_d (int A[], int n)
{
    int i = 0;
    long long tich = 1;
    long long giaithua = 1;
    for (i = 1; i < n; i++)
    {
        giaithua *= A[i];
        tich *= giaithua;
    }
    return tich;
}
float cau_e (int A[], int n)
{
    int i = 0;
    float tich = 1;
    for (i = 1; i < n; i++)
    {
       tich = (float)tich * (2*A[i] / 3);
    }
    return tich;
}