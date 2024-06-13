#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    printf("\n Nhap chuoi: ");
    scanf("%s", s);
    printf(" Neu la chuoi doi xung tra ve 1 \n Neu khong phai chuoi doi xung tra ve 0 \n");
    int i, kq = 0;
    for(i = 0; i < strlen(s)/2; i++)
    {
        if(s[i] != s[strlen(s) - 1 - i])
        {
            kq == 1;
        }
    }
    kq == 0;

    printf("\n Ket qua: %d \n", kq);

    return 0;
}