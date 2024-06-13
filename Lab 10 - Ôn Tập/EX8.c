#include <stdio.h>
int f(int x);
int main()
{
    int x = 0;
    printf("\n Nhap vao so can tinh x = ");
    scanf("%d", &x);
    int i = 1;

    printf(" Ket qua cau 8: ");
    for(i = 1; i <= x; i++)
    {
        printf(" %d ", f(i));
    }

    printf("\n");
    return 0;
}
int f(int x)
{
    if(x == 0)
        return 1;
    else if(x == 1)
        return 2;
    return 2*f(x - 1) + 3*f(x - 2);
}