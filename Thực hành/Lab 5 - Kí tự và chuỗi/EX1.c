/*-- Input a string and return the string's length --*/

#include <stdio.h>
#include <string.h>
int main () 
{
    char str[1000];
    printf("\n Nhap mot chuoi bat ky: ");
    gets(str);

    int i = strlen(str);
    printf (" Do dai cua chuoi la: %d \n", i);

    return 0;
}