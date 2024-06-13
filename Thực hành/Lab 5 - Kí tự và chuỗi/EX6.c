/*-- Input a string and check whether a character appears or not. If yes, return the first position. --*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    printf("\n Nhap mot chuoi bat ky: ");
    gets(str);

    char kitu[10];
    printf(" Nhap mot ki tu can kiem tra trong chuoi: ");
    scanf("%c", kitu);
    
    char *ktr = strstr(str, kitu);
    if(ktr == 0)
    {
        printf(" Ki tu nay khong co xuat hien trong chuoi! \n");
    }
    else
    {
        int vitridautien = strlen(str) - strlen(ktr) + 1;    
        printf(" Ki tu '%s' xuat hien lan dau tien o vi tri %d \n", kitu, vitridautien);
    }

    return 0;
}