#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#define SIZE 40

typedef struct                                                  
{
    long mssv;
    char hoten[30];
    float diempplt;
    float diemdstt;
    float diemtoantin;
    float diemtbtichluy;
    char xeploai[20];
} SinhVien;

void DanhSachSinhVien(SinhVien *sv);                                             
void InDanhSach(SinhVien sv);

void Cau6a(SinhVien *sv);
void Cau6b(SinhVien *sv);
void DiemTrungBinh(SinhVien *sv);
void Cau6c(SinhVien *sv);
void XepLoai(SinhVien *sv);
void Cau6d(SinhVien *sv);
void Cau6e(SinhVien *sv);

int main(int argc, char const *argv[])
{
    SinhVien sv[SIZE];
    DanhSachSinhVien(sv);

    printf("\n/*------------- DANH SACH CHUC NANG -------------*/\n");
    printf("\n [1]. Tim sinh vien qua MSSV. ");
    printf("\n [2]. Diem trung binh tich luy. ");
    printf("\n [3]. Gia tri xep loai. ");
    printf("\n [4]. Sinh vien có diem trung binh thap nhat. ");
    printf("\n [5]. Thong ke sinh vien hoc luc kha. ");
   
    int option = 0;
    printf("\n [?] = ");
    scanf("%d", &option);

    switch(option)
    {
        case 1:
            Cau6a(sv);
            break;
        case 2:
            printf("\n Danh sach sau khi tinh diem trung binh tich luy. \n");
            Cau6b(sv);
            break;
        case 3:
            printf("\n Danh sach sau khi xep loai. \n");
            Cau6c(sv);
            break;
        case 4:
            printf("\n Thong tin sin vien co diem trung binh thap nhat. \n");
            Cau6d(sv);
            break;
        case 5:
            printf("\n Thong tin sin vien co xep loai Kha. \n");
            Cau6e(sv);
            break;
        default:
            printf("\n Khong co chuc nang da chon! \n");
            break;
    }
    return 0;
}

void DanhSachSinhVien(SinhVien *sv)
{
    FILE *infile = fopen("DanhSach.csv", "r");

    if (!infile)
    {
        printf("Can not open file \n");
        exit(1);
    }
    int i, n = 0;
    char line[1024];
    while (fgets(line, 1024, infile))
    {
        n = 0;
        char *value = strtok(line, ",");
        while (value)
        {
            if(n == 0)
                sv[i].mssv = atol(value);
            if(n == 1)
                strcpy(sv[i].hoten, value);
            if(n == 2)
                sv[i].diempplt = atof(value);
            if(n == 3)
                sv[i].diemdstt = atol(value);
            if(n == 4)
                sv[i].diemtoantin = atol(value);
            if(n == 5)
                sv[i].diemtbtichluy = atol(value);
            if(n == 6)
                strcpy(sv[i].xeploai, value);
            value = strtok(NULL, ",");
            n++;
        }
        i++;
    }

    fclose(infile);
}

void InDanhSach(SinhVien sv)
{
    printf("\n %6d \t %15s \t %10.2f \t %15.2f \t %10.2f \t %10.2f \t %15s", sv.mssv, sv.hoten, sv.diempplt, sv.diemdstt, sv.diemtoantin, sv.diemtbtichluy, sv.xeploai);
}

void Cau6a(SinhVien *sv)
{
    int i = 0;
    int mssv = 0;
    printf("\n Nhap MSSV cua sinh vien can in thong tin: ");
    scanf("%d", &mssv);
    
    printf("\n %6s \t %13s \t %22s \t %2s \t %3s \t %5s \t %s", "MSSV", "Ho va ten", "Diem PPLT", "Diem DSTT", "Diem Toan Tin", "Diem TB Tich Luy", "Xep Loai");
    for(i = 0; i < SIZE; i++)
    {
        if(sv[i].mssv == mssv)
        {
            InDanhSach(sv[i]);
        }
    }
}

void DiemTrungBinh(SinhVien *sv)
{
	int i = 0;
    for(i = 0; i < SIZE; i++)
    {
        sv[i].diemtbtichluy = (sv[i].diempplt + sv[i].diemdstt + sv[i].diemtoantin)/3;
    }
}

void Cau6b(SinhVien *sv)
{
    int i = 0;
    printf("\n %6s \t %13s \t %22s \t %2s \t %3s \t %5s \t %s", "MSSV", "Ho va ten", "Diem PPLT", "Diem DSTT", "Diem Toan Tin", "Diem TB Tich Luy", "Xep Loai");
    for(i = 0; i < SIZE; i++)
    {
        DiemTrungBinh(sv);
        InDanhSach(sv[i]);
    }
}

void XepLoai(SinhVien *sv)
{   
    DiemTrungBinh(sv);
    int i = 0;
    for(i = 0; i < SIZE; i++)
    {
        if(sv[i].diemtbtichluy >= 9)
            strcpy(sv[i].xeploai, "Xuat sac");
        else if(sv[i].diemtbtichluy >= 8)
            strcpy(sv[i].xeploai, "Gioi");
        else if(sv[i].diemtbtichluy >= 7)
            strcpy(sv[i].xeploai, "Kha gioi");
        else if(sv[i].diemtbtichluy >= 6)
            strcpy(sv[i].xeploai, "Kha");
        else if(sv[i].diemtbtichluy >= 5)
            strcpy(sv[i].xeploai, "Trung binh kha");
        else if(sv[i].diemtbtichluy >= 4)
            strcpy(sv[i].xeploai, "Trung binh");
        else
            strcpy(sv[i].xeploai, "Yeu");
    }
}

void Cau6c(SinhVien *sv)
{
    int i = 0;
    printf("\n %6s \t %13s \t %22s \t %2s \t %3s \t %5s \t %s", "MSSV", "Ho va ten", "Diem PPLT", "Diem DSTT", "Diem Toan Tin", "Diem TB Tich Luy", "Xep Loai");
    for(i = 0; i < SIZE; i++)
    {   
        XepLoai(sv);
        InDanhSach(sv[i]);
    }
    printf("\n");
}

void Cau6d(SinhVien *sv)
{
    XepLoai(sv);
    int i = 0;
    int min = sv[0].diemtbtichluy;
    printf("\n %6s \t %13s \t %22s \t %2s \t %3s \t %5s \t %s", "MSSV", "Ho va ten", "Diem PPLT", "Diem DSTT", "Diem Toan Tin", "Diem TB Tich Luy", "Xep Loai");
	for(i = 0; i < SIZE; i++)
    {
		if(min > sv[i].diemtbtichluy)
        {
			InDanhSach(sv[i]);
		}
	}
    printf("\n");
}

void Cau6e(SinhVien *sv)
{
    XepLoai(sv);
    int i, count = 0;
    printf("\n %6s \t %13s \t %22s \t %2s \t %3s \t %5s \t %s", "MSSV", "Ho va ten", "Diem PPLT", "Diem DSTT", "Diem Toan Tin", "Diem TB Tich Luy", "Xep Loai");
	for(i = 0; i < SIZE; i++)
    {
		if(strcmp(sv[i].xeploai, "Kha") == 0)
        {
            count++;
            InDanhSach(sv[i]);
            
		}
	}
    printf("\n\n Có %d hoc sinh xep loai Kha \n", count);
}