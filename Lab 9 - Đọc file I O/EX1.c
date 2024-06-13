/*-- Read the input data(input01.txt) contains 20 integer numbers, then write to the new file the sum of them. --*/

#include <stdio.h>
int main()
{
    FILE *input1 = fopen("./input1.txt", "r");
    FILE *output1 = fopen("./output1.txt", "w");
    int  a;
    int sum = 0;
    while(fscanf(input1, "%d", &a) != EOF)
    {
        sum += a;
    }
    fprintf(output1, "Tong tu 1 den 20 = %d", sum);   
    fclose(input1);
    fclose(output1);
    return 0;
}
