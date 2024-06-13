/*-- Write program to sort array elements in ascending order --*/

#include <stdio.h>

void nhapmang (int A[], int n);   
void xuatmang (int A[], int n);
void sapxeptangdan (int A[], int n);

int main ()
{
    int A[100];
    int n = 0;
    do 
    {   
        printf ("\n Nhap so luong phan tu su dung trong mang A[n] = ");
        scanf ("%d", &n);
    }
    while (n <= 0);

    nhapmang (A, n);

    printf ("\n Mang A[n] sau khi nhap la: \n");
    xuatmang (A, n);

    sapxeptangdan (A, n);

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
    for (i = 0 ; i < n ; i++)
    {
        printf (" %d  ", A[i]);
    }
}
void sapxeptangdan (int A[], int n)
{
    int i, j, temp = 0;
    for(i = 0 ; i < n - 1 ; i++)
    {
        for(j = i + 1 ; j < n ; j++)
        {
            if (A[i] > A[j]) 
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    printf("\n Mang A sau khi sap xep theo thu tu tang dan la: \n"); 
    xuatmang (A, n);   
}