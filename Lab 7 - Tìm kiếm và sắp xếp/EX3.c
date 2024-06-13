/*-- Implement the selection sort algorithm for sorting a list in descendant order --*/

#include <stdio.h>
#define MAX 1000

void input(int A[], int n);
void output(int A[], int n);
void selectionSort(int A[], int n);

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
    selectionSort(A, n);
    printf("\n Sap xep mang bang thuat toan selectionSort \n");
    output(A, n);

    return 0;
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
        printf(" Gia tri phan tu thu %d = %d \n", i, A[i]);
    }
}
void hoanvi(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int A[], int n)
{
    int i, j, min;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (A[j] < A[min])
            {
                min = j;
            }
        }
        hoanvi(&A[min], &A[i]);
    }
}