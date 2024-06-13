/*-- Write functions to reverse an aray without using any temporary array --*/

#include <stdio.h>

void nhapmang (int A[], int n); 
void xuatmang (int a[], int n);  
void daonguoc (int A[], int n);    

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

    printf ("\n Mang A[n] truoc khi dao nguoc la: \n");
    xuatmang (A, n);

    printf ("\n Mang A[n] sau khi dao nguoc la: \n"); 
    daonguoc (A, n);
    
    printf ("\n");
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
    for (i = 0 ;i < n; i++)
    {
        printf (" %d  ", A[i]);
    }
}
void daonguoc (int A[], int n)
{
    int i = 0;
    for (i = n - 1 ; i >= 0 ; i--)
    {
        printf (" %d  ", A[i]);
    }
}