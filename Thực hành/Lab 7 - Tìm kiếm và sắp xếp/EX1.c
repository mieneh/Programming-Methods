/*-- Implement the sequential search algorirgm --*/

#include<stdio.h>
#define MAX 1000

void input(int A[], int n);
void output(int A[], int n);
int timkiemLinear(int A[], int n, int x);

int main()
{
    int A[MAX];
    int n, x;
    do
    {
        printf("\n Nhap n = ");
        scanf("%d", &n);
    } while (n <= 0);

    input(A, n);
    output(A, n);

    printf(" Nhap x = ");
    scanf("%d", &x);

      if (timkiemLinear(A, n, x) == -1)
    {
        printf(" Khong tim thay gia tri %d trong mang \n", x);
    }
    else
    {
        printf(" Gia tri %d duoc tim thay o vi tri thu %d trong mang \n", x, timkiemLinear(A, n, x));
    }
}
    
void input(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf(" Nhap phan tu thu %d = ", i);
        scanf("%d", &A[i]);
    }
}

void output(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Gia tri phan tu thu %d = %d ", i, A[i]);
    }
}

int timkiemLinear(int A[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (A[i] == x)
        {
            return i;
        }
    }
    return -1; 
}