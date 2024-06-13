/*-- Write function to sum all even number of an integer array. --*/

#include <stdio.h>

void nhapmang (int A[], int n);  
void xuatmang (int a[], int n); 
int tongcacphantuchan (int A[], int n); 

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

    printf ("\n Tong cac phan tu so chan trong mang A = %d \n", tongcacphantuchan(A, n));

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
int tongcacphantuchan (int A[], int n)
{
    int i = 0;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        if (A[i] % 2 == 0)
        {
            sum += A[i];
        }
    }
    return sum;
}