#include <stdio.h>
int Min(int A[], int n);
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

    printf("\n Min = %d \n", Min(A, n));

    return 0;
}

int Min(int A[], int n)
{
    int min = A[0];
    for (int i = 1; i < n; i++)
    {
        if (min > A[i])
        {
            min = A[i];
        }
    }
    return min;
}
