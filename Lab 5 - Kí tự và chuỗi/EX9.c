/*-- Input two string s1 and s2, return the first position where s2 appears in s1. --*/

#include <stdio.h>
#include <string.h>
int vitri(char *s1,char *s2);
int main()
{
    char s1[100];
    printf("\n Nhap chuoi thu nhat: ");
    gets(s1);

    char s2[100];
    printf(" Nhap chuoi thu hai: ");
    gets(s2);
    
    char *ktr = strstr(s1, s2);
    if(ktr == NULL)
    {
        printf(" Chuoi 2 khong co xuat hien trong chuoi 1 \n");
    }
    else
    {
        int vitridautien = strlen(s1) - strlen(ktr) + 1;        
        printf(" Chuoi 2 xuat hien lan thu nhat trong chuoi 1 o vi tri %d \n", vitridautien);
    }
    
    return 0;
}

