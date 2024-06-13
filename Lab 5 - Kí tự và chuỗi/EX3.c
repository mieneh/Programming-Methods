/*-- Input a string represent a full name, split and print the first name and the last name --*/

#include <stdio.h>
#include<string.h>
int main() 
{
    char hovaten[1000];
    printf("\n Nhap ho va ten cua ban: ");
    gets(hovaten);
    char *p = strtok(hovaten, " ");
    
    int dem = 0;
    char mang[7][7];

    while(p != NULL)
    {
        strcpy(mang[dem], p);
        dem++;
        p = strtok(NULL, " ");
    }
    
    printf("\n Ho: %s", mang[0]);
    printf("\n Ten: %s \n", mang[dem - 1]);
    
    return 0;
}