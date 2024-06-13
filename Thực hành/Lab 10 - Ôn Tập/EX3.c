#include <stdio.h>
int kiemtra(int ngay, int thang, int nam);
int main()
{
    int ngay, thang, nam = 0;
    printf("\n Nhap ngay: ");
    scanf("%d", &ngay);
    printf(" Nhap thang: ");
    scanf("%d", &thang);
    printf(" Nhap nam: ");
    scanf("%d", &nam);
    printf("\n %d/%d/%d ->", ngay, thang, nam);

    if(kiemtra(ngay, thang, nam) == 1)
    {
        printf(" Thong tin hop le! \n");
    }
    else
    {
        printf(" Thong tin khong hop le! \n");
    }
}

int kiemtra(int ngay, int thang, int nam)
{
    switch (thang)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        {    
            if(ngay >= 1 && ngay <= 31)
                return 1;
            return 0;
                break;
        }
        case 4: case 6: case 9: case 11:
        {
            if(ngay >= 1 && ngay <= 30)
                return 1;
            return 0;
                break;
        }
        case 2:
        {
            if(ngay >= 1 && ngay <= 27)
                return 1;
            if(ngay == 28 && nam % 4 == 0)
                return 1;
            else
                return 0;
                break;
        }
        default:
            return 0;
            break;
    }
}