/*-- Write program to merge two array to third array --*/

#include <stdio.h>

void nhapmangA (int A[], int n);   
void xuatmangA (int A[], int n);
void nhapmangB (int B[], int m);   
void xuatmangB (int B[], int m);
void gopmang (int A[], int n, int B[], int m);

int main ()
{
    int A[100], B[100];
    int n, m = 0;
    do 
    {   
        printf ("\n Nhap so luong phan tu su dung trong mang A[n] = ");
        scanf ("%d", &n);
        printf ("\n");
    }
    while (n <= 0);
    nhapmangA (A, n);
    
    do 
    {   
        printf ("\n Nhap so luong phan tu su dung trong mang B[m] = ");
        scanf ("%d", &m);
        printf ("\n");
    }
    while (m <= 0);
    
    nhapmangB (B, m);

    printf ("\n Mang A[n] sau khi nhap la: \n");
    xuatmangA (A, n);

    printf ("\n Mang B[m] sau khi nhap la: \n");
    xuatmangB (B, m);

    printf ("\n Ket qua sau khi gop 2 mang la: \n");
    gopmang (A, n, B, m);
    
    printf ("\n ");

    return 0;
}
void nhapmangA (int A[], int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        printf (" Nhap gia tri phan tu A[%d] = ", i);
        scanf ("%d", &A[i]);
    }
}
void xuatmangA (int A[], int n)
{
    int i = 0;
    for (i = 0 ; i < n ; i++)
    {
        printf (" %d  ", A[i]);
    }
}
void nhapmangB (int B[], int m)
{
   int i = 0;
   for (i = 0; i < m; i++)
   {
      printf (" Nhap gia tri phan tu B[%d] = ", i);
      scanf ("%d", &B[i]);
   }
}
void xuatmangB (int B[], int m)
{
    int i = 0;
    for (i = 0 ; i < m ; i++)
    {
        printf (" %d  ", B[i]);
    }
}
void gopmang (int A[], int n, int B[], int m)
{
    int C[200];
    int i = 0;
    for (i = 0 ; i < (n + m) ; i++)
    {
        if (i < n)
        {
            C[i] = A[i];
        }
        else
        {
            C[i] = B[i - n];
        }   
        printf (" %d  ", C[i]);
    }
}