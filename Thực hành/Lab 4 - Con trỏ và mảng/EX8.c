/*-- Write program to delete an element from an array at specified position --*/

#include <stdio.h>

void nhapmang (int A[], int n); 
void xuatmang (int a[], int n);  
void xoaphantu (int A[], int n, int vitri);    

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

    printf ("\n Mang A[n] truoc khi xoa la: \n");
    xuatmang (A, n);

    int vitri = 0;
    printf ("\n Vi tri phan tu can xoa: ");
    scanf ("%d", &vitri);

    printf (" Mang A[n] sau khi xoa la: \n");
    xoaphantu (A, n, vitri);

    printf("\n");
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
void xoaphantu (int A[], int n, int vitri)
{
    if (vitri < 0)
    {
        vitri = 0;
    }
    else if (vitri >= n)
    {
        vitri = n - 1;
    }

    int i = 0;
    for (i = vitri ; i < n - 1 ; i++)
    {
        A[i] = A[i + 1]; 
    }
    --n;
    xuatmang(A, n);
}