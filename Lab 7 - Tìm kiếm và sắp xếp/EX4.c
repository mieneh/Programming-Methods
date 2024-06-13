/*-- Implement the bubble sort algorithm for sorting a list in descendant order --*/

#include <stdio.h>
#define MAX 1000

void input(int A[], int n);
void output(int A[], int n);
void hoanvi(int *a, int *b);
void bubbleSort(int A[], int n);

int main()
{
    int A[MAX];
    int n;
    do
    {
        printf("\n Nhap n = ");
        scanf("%d", &n);
    } while (n <= 0);

    input(A, n);
    bubbleSort(A, n);
    printf("\n Sap xep mang bang thuat toan BubbleSort \n");
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

void bubbleSort(int A[], int n)
{
    int i, limit;

    for (limit = n - 2; limit >= 0; limit--)
    {
        for (i = 0; i <= limit; i++)
        {
            if (A[i] > A[i + 1])
            {
                hoanvi(&A[i], &A[i + 1]);
            }
        }
    }
}