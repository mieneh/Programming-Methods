#include <stdio.h>

void Output(int A[], int n);
void Hoanvi(int *a, int *b);
void SelectionSort(int A[], int n);
void BubbleSort(int A[], int n);

int main()
{
    int n = 0;
    printf("\n Nhap n = ");
    scanf("%d", &n);
    
    int A[n];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        printf(" A[%d] = ", i);
        scanf("%d", &A[i]);
    }
    printf(" Mang vua nhap: ");
    Output(A, n);
    printf("\n");

    int chon = 0;
    printf("\n [1]. Thuat toan SelectionSort");
    printf("\n [2]. Thuat toan BubbleSort");
    printf("\n [?].  ");
    scanf("%d", &chon);

    switch (chon)
    {
    case 1:
        SelectionSort(A, n);
        printf("\n Sap xep mang bang thuat toan SelectionSort: ");
        Output(A, n);
        printf("\n");
        break;
    case 2:
        BubbleSort(A, n);
        printf("\n Sap xep mang bang thuat toan BubbleSort: ");
        Output(A, n);
        printf("\n");
        break;
    default:
        printf("\n Thuat toan khong hop le \n");
        break;
    }

    return 0;
}

void Output(int A[], int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        printf(" %d ", A[i]);
    }
}

void Hoanvi(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void SelectionSort(int A[], int n)
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
        Hoanvi(&A[min], &A[i]);
    }
}

void BubbleSort(int A[], int n)
{
    int i, limit;
    for (limit = n - 2; limit >= 0; limit--)
    {
        for (i = 0; i <= limit; i++)
        {
            if (A[i] > A[i + 1])
            {
                Hoanvi(&A[i], &A[i + 1]);
            }
        }
    }
}