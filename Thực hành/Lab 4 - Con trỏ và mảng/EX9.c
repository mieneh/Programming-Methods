/*-- Write program to count total number of duplicate elements in an array --*/

#include <stdio.h>

void nhapmang (int A[], int n);   
void xuatmang (int A[], int n);
void phantutrungnhau (int A[], int n);

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

    phantutrungnhau (A, n);

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
        printf(" %d  ", A[i]);
    }
}
void phantutrungnhau (int A[], int n)
{
    int i, j = 0;
    int dem = 0;
    for (i = 0 ; i < n ; i++)
    {
        for (j = i + 1 ; j < n ; j++)
        {
            if (A[i] == A[j])
            {
                dem++;
                break;
            }
        }
    }
    printf("\n Co tat ca %d phan tu trung nhau. \n", dem);
}