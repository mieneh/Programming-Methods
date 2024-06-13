/*-- Write program to put even and odd element of array into two new separate arrays --*/

#include <stdio.h>

void nhapmang (int A[], int n);   
void xuatmang (int A[], int n);
void mangchan (int A[], int n);
void mangle (int A[], int n);

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

    printf ("\n Cac phan tu co trong mang chan la: \n");
    mangchan (A, n);

    printf ("\n Cac phan tu co trong mang le la: \n");
    mangle (A, n);

    printf ("\n ");
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
void mangchan (int A[], int n)
{
    int i = 0;
    for (i = 0 ; i < n ; i++)
    {
        if (A[i] % 2 == 0)
        {
            printf (" %d  ", A[i]);
        }
    }
}
void mangle (int A[], int n)
{
    int i = 0;
    for (i = 0 ; i < n ; i++)
    {
        if (A[i] % 2 == 1)
        {
            printf (" %d  ", A[i]);
        }
    }
}
