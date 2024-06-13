/*-- Input two string s1 and s2, concatenating s2 to s1. --*/

#include <stdio.h>
int main()
{
    char s1[100];
    printf("\n Nhap chuoi thu nhat: ");
    gets(s1);

    char s2[100];
    printf(" Nhap chuoi thu hai: ");
    gets(s2);

    char *ptr1 = s1, *ptr2 = s2;
    
    printf(" Chuoi sau khi nhap lai voi nhau: %s%s \n", ptr1 ,ptr2);
    
    return 0;
}