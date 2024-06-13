/*-- Input two string s1, s2 and position. Then insert s2 to s1 from this position. --*/

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[1000]; 
    printf ("\n Nhap chuoi thu nhat: ");
    gets (s1);
    
    char s2[100];
    printf (" Nhap chuoi thu hai: ");
    gets (s2);
    
    int pos = 0;
    printf (" Nhap vi tri can chen: ");
    scanf ("%d", &pos);

    int i, j, dem, t = 0;
    char s[1000], *ptr = s, *ptr1 = s1, *ptr2;

    for (i = 0, j = 0; *ptr1 != '\0'; ptr++, i++, j++, ptr1++)
    {
        s[j] = s1[i];
        if (*ptr1 == ' ' && t != 1)
        {
            ++dem;
        }    
        if (t != 1 && dem == pos - 1)
        {
            t = 1;
            for (ptr2 = s2; *ptr2 != '\0'; ptr2++)
            {
                s[++j] = *ptr2;
                ptr++;
            }
            s[++j] = ' ';
            ptr++;
        }
    }
    s[j] = '\0';
    printf(" Chuoi 1 sau khi duoc chen chuoi 2 la: %s \n", s);

    return 0;
}