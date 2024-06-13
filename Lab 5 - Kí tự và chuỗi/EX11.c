/*-- Input a string and two integer numbers; named n and position. Then delete n characters to be deleted of input string. --*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    printf ("\n Nhap mot chuoi bat ki: ");
    gets (str);

    int pos = 0;
    printf (" Nhap vi tri ki tu can xoa: ");
    scanf ("%d", &pos);

    int n = 0;
    printf (" Nhap so ki tu can xoa: ");
	scanf ("%d",&n);
	
    if (pos + n - 1 <= strlen(str))
    {
        strcpy (&str[pos - 1], &str[pos + n - 1]);
    }
    printf (" Chuoi sau khi da xoa %d ki tu la: %s \n", n, str);
    
    return 0;
}