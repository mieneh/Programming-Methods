/*-- Read the input data(input02.txt) contains 5 strings, then write to the new file the length of each string. --*/

#include <stdio.h>
#include <string.h>
int main()
{
    FILE *input2 = fopen("./input2.txt", "r");
    FILE *output2 = fopen("./output2.txt", "w");
    char s[250];
    int len = 0;
    int i = 0;
    while(fgets(s, 250, input2) != NULL) 
    {
        len = strlen(s);
        fprintf(output2,"%d\n", len - 2);    
    }
    fclose(input2);
    fclose(output2);
    return 0;
}
