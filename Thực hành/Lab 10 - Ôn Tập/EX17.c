#include <stdio.h>
int SumMin(int A[], int n);
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


    printf("\n Tong cac so le: sum = %d \n", SumMin(A, n));
    return 0;
}

int SumMin(int A[], int n)
{
    int i, sum = 0;
    for(i = 0; i <= n; i++)
    {
        if(A[i] % 2 == 1)
        {
            sum += A[i];
        }
    }
   return sum;
}