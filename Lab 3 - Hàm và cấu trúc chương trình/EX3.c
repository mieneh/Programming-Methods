/*-- Write a C program to print table of any number. --*/

#include <stdio.h>
int bangnhan();
int main ()
{
    int i = 0;
    int j = 0;
	bangnhan ();
    return 0;
}
int bangnhan (int n, int i, int j)
{
    for (i = 0 ; i <= 10 ; i++)
    {
        printf ("Bang nhan %d: \n", i);
        for (j = 0 ; j <= 10 ; j++)
        {
            printf ("                   %d x %d = %d \n", i, j, i*j );
        }
    }
}