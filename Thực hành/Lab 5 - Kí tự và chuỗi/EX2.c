/*-- Input a string and print it in reverse order --*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    printf("\n Nhap mot chuoi bat ky: ");
    gets(str);
    
    int i = 0;
    printf(" Chuoi sau khi dao nguoc la: ");
    for(i = strlen(str); i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}