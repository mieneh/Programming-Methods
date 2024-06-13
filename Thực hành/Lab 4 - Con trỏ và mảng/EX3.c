/*-- Write function to find minimum number of an integer array. --*/

#include <stdio.h>

void nhapmang (int A[], int n);   
void xuatmang (int a[], int n);
int minimum (int A[], int n);

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

    printf ("\n So nho nhat trong cac phan tu mang A = %d \n", minimum(A, n));
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
int minimum (int A[], int n)
{
    int i = 0;
    int min = 0;

    for (i = 0; i < n; i++)
    {
        if (A[i] < A[min])
        {
            min = i;
        }
    }
    return A[min];
}