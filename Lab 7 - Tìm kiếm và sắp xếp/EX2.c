/*-- Implement the sequential search algorirgm --*/

#include <stdio.h>
#define MAX 1000

void input(int A[], int n);
void output(int A[], int n);
int timkiemBinary(int A[], int n, int x);

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

    if (timkiemBinary(A, n, x) == -1)
    {
        printf(" Khong tim thay gia tri %d trong mang \n", x);
    }
    else
    {
        printf(" Gia tri %d duoc tim thay o vi tri thu %d trong mang \n", x, timkiemBinary(A, n, x));
    }
}

void input(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu %d = ", i);
        scanf("%d", &A[i]);
    }
}

void output(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Gia tri phan tu thu %d = %d \n", i, A[i]);
    }
}

int timkiemBinary(int A[], int n, int x)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (A[mid] == x)
        {
            return mid;
        }
        if (A[mid] > x)
        {
            high = mid - 1;
        }
        if (A[mid] < x)
        {
            low = mid + 1;
        }
    }
    return -1;
}