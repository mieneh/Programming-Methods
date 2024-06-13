/*-- Write a C program to print table of any number. --*/

#include <stdio.h>
int main ()
{
    int i = 0;
    int j = 0;
	for (i = 0 ; i <= 10 ; i++)
    {
        printf ("Bang nhan %d: \n", i);
        for (j = 0 ; j <= 10 ; j++)
        {
            printf ("                   %d x %d = %d \n", i, j, i*j );
        }
    }
    return 0;
}
