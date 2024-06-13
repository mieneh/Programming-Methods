#include <stdio.h>
void Input(int A[], int n);
int countDuplicate(int A[], int n, int k);
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

    int k = 0;
    printf("\n Nhap so can dem n = ");
    scanf("%d", &k);

    printf(" So %d xuat hien %d lan \n", k, countDuplicate(A, n, k));

    return 0;
}

int countDuplicate(int A[], int n, int k)
{
    int i, count = 0;
    for (i = 0; i < n; i++)
    {
        if(A[i] == k)
        {
            count++;
        }
    }
    return count;
}