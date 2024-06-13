/*-- Input a string and check whether a word appears or not. If yes, return the first position. --*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    printf("\n Nhap mot chuoi bat ky: ");
    gets(str);

    char tu[10];
    printf(" Nhap mot tu can kiem tra trong chuoi: ");
    gets(tu);
    
    char *ktr = strstr(str, tu);
    if(ktr == NULL)
    {
        printf(" Tu nay khong co xuat hien trong chuoi! \n");
    }
    else
    {
        int vitridautien = strlen(str) - strlen(ktr) + 1;    
        printf(" Tu '%s' xuat hien lan dau tien o vi tri %d \n", tu, vitridautien);
    }

    return 0;
}