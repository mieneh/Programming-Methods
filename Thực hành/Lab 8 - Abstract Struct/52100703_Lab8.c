#include<stdio.h>
#include<string.h>
#define SIZE 10

//Cau1
typedef struct                                                  
{
    int id;
    char name[30];
    int sex;
    int birthyear;
    char phone[10];
    int salary;
} Employee;

void DanhSach(Employee *emp);                               //Cau2                     
void OutputDanhSach(Employee emps);
void InDanhSach(Employee *emp, int n);/*                             //Cau3
void TimNhanVienQuaID(Employee *emp);                       //Cau4
int DemSoNhanVien(Employee *emp, int no);           //Cau5                      /
void MangNhanVienTheoNamSinh(Employee emp[]);                  
void MangNhanVienTheoLuong(Employee emp[]);                                                            //Cau7
void NhanVienLuongNhieuNhat(Employee *emp);     //Cau8
void NhanVienItTuoiNhat(Employee *emp); */                  //Cau9
void XoaNhanVien(Employee *emp, int n);                     //Cau10

int main()
{
    int n = 10;
    Employee emp[n];
    DanhSach(emp);

    
    int option = 0;
    do {
        printf("\n\n /*--------------- DANH SACH CHUC NANG ---------------*/ \n\n");
        printf(" Option[1]: In danh sach nhan vien \n");
        printf(" Option[2]: Tim nhan vien qua ID \n");
        printf(" Option[3]: So luong nhan vien theo gioi tinh \n");
        printf(" Option[4]: Sap xep mang nhan vien theo thu tu tang dan cua nam sinh \n");
        printf(" Option[5]: Sap xep mang nhan vien theo thu tu tang dan cua tien luong \n");
        printf(" Option[6]: Tim nhan vien co tien luong nhieu nhat \n");
        printf(" Option[7]: Tim nhan vien tre tuoi nhat \n");
        printf(" Option[8]: Xoa nhan vien duoc chi dinh \n");
        printf("\n Option[?]: ");
        scanf("%d", &option);
        printf("\n");

        switch(option)
        {
            case 1:
                printf(" ---------------------------------- Danh sach nhan vien: ---------------------------------- ");
                InDanhSach(emp, n);
                break;
/*            case 2:
                TimNhanVienQuaID(emp, n);
                break;

            case 3:
                int no;
                printf(" So luong nhan vien theo gioi tinh: \n [0]: Male \n [1]: Female \n");
                printf("\n [?]: ");
                scanf("%d", &no);

                if(no == 0)
                {
                    printf("\n So luong nhan vien nam: %d ", DemSoNhanVien(emp, no));
                }
                else if(no == 1)
                {   
                    printf("\n So luong nhan vien nu: %d ", DemSoNhanVien(emp, no));
                }
                else
                {
                    printf("\n Sai chuc nang ");
                }       
                break;

            case 4:
                MangNhanVienTheoNamSinh(emp);
                printf(" ----------------- Danh sach nhan vien theo thu tu tang dan cua nam sinh: ----------------- ");
                InDanhSach(emp);
                break;

            case 5:
                MangNhanVienTheoLuong(emp);
                printf(" ---------------- Danh sach nhan vien theo thu tu tang dan cua tien luong: ---------------- ");
                InDanhSach(emp);
                break;

            case 6:
                printf(" Thong tin nhan vien co so tien luong nhieu nhat: \n");
                NhanVienLuongNhieuNhat(emp);
                break;

            case 7:
                printf(" Thong tin nhan vien tre tuoi nhat: \n");
                NhanVienItTuoiNhat(emp);
                break;
*/
            case 8:
                XoaNhanVien(emp, n);
                printf(" ---------------- Danh sach nhan vien sau khi xoa nhan vien duoc chi dinh: ---------------- ");
                InDanhSach(emp, n);
                break;

            default:
                printf(" Sai chuc nang, vui long chon lai! \n");
                break;
        }
    } while(option > 0 && option <= 9);

    return 0;
}

/*---------- Cau2 ----------*/
void DanhSach(Employee *emp)
{
    emp[0].id = 1001;
    strcpy(emp[0].name, "Hoang Bich Ha");
    emp[0].sex = 1;
    emp[0].birthyear = 2003;
    strcpy(emp[0].phone, "0347864234");
    emp[0].salary = 10000000;

    emp[1].id = 1002;
    strcpy(emp[1].name, "Nguyen Huy Hoang");
    emp[1].sex = 0;
    emp[1].birthyear = 2002;
    strcpy(emp[1].phone, "0973287768");
    emp[1].salary = 5000000;

    emp[2].id = 1003;
    strcpy(emp[2].name, "Dang Mai Phuong");
    emp[2].sex = 1;
    emp[2].birthyear = 2000;
    strcpy(emp[2].phone, "0962760354");
    emp[2].salary = 7000000;

    emp[3].id = 1004;
    strcpy(emp[3].name, "Hoang Minh Duc");
    emp[3].sex = 0;
    emp[3].birthyear = 2003;
    strcpy(emp[3].phone, "0348675911");
    emp[3].salary = 20000000;

    emp[4].id = 1005;
    strcpy(emp[4].name, "Luu Thi Thanh Thao");
    emp[4].sex = 1;
    emp[4].birthyear = 2002;
    strcpy(emp[4].phone, "0984674028");
    emp[4].salary = 900000;

    emp[5].id = 1006;
    strcpy(emp[5].name, "Ngo Truc Quynh");
    emp[5].sex = 1;
    emp[5].birthyear = 2009;
    strcpy(emp[5].phone, "0335952882");
    emp[5].salary = 3000000;

    emp[6].id = 1007;
    strcpy(emp[6].name, "Vo Nguyen Canh Duong");
    emp[6].sex = 0;
    emp[6].birthyear = 2001;
    strcpy(emp[6].phone, "0343134302");
    emp[6].salary = 9500000;

    emp[7].id = 1008;
    strcpy(emp[7].name, "Ngo Duc Thai Bao");
    emp[7].sex = 0;
    emp[7].birthyear = 2003;
    strcpy(emp[7].phone, "0938381407");
    emp[7].salary = 9000000;

    emp[8].id = 1009;
    strcpy(emp[8].name, "Tran Trung Nguyen");
    emp[8].sex = 0;
    emp[8].birthyear = 2001;
    strcpy(emp[8].phone, "0348675911");
    emp[8].salary = 6000000;

    emp[9].id = 1010;
    strcpy(emp[9].name, "Nguyen Thi Yen Nhi");
    emp[9].sex = 1;
    emp[9].birthyear = 2004;
    strcpy(emp[9].phone, "0348675911");
    emp[9].salary = 25000000;
}

void OutputDanhSach(Employee emps)
{
    printf("\n %6d \t", emps.id);
    printf(" %15s \t", emps.name);
    if(emps.sex == 0)
    {
        printf(" Female   ");
    }
    else
    {
        printf(" Male     ");
    }
    printf(" %10d \t", emps.birthyear);
    printf(" %15s \t", emps.phone);
    printf(" %10d ", emps.salary);
}

/*---------- Cau3 ----------*/
void InDanhSach(Employee *emp, int n)
{   
    int i = 0;
    printf("\n %5s \t %18s \t %11s \t %14s \t %4s \t %17s", "ID", "Name", "Sex", "BirthYear", "Phone", "Salary");
    for(i = 0; i < n; i++)
    {
        OutputDanhSach(emp[i]);
    }
    printf("\n");
}

/*---------- Cau4 ----------/
void TimNhanVienQuaID(Employee *emp)
{
    int i = 0;
    int id = 0;
    printf(" Nhap ID nhan vien can in thong tin: ");
    scanf("%d", &id);
    printf("\n %5s \t %18s \t %11s \t %14s \t %4s \t %17s", "ID", "Name", "Sex", "birthyear", "Phone", "Salary");
    for(i = 0; i < SIZE; i++)
    {
        if(emp[i].id == id)
        {
            OutputDanhSach(emp[i]);
            break;
        }
    }
}

/*---------- Cau5 ----------/
int DemSoNhanVien(Employee *emp, int no)
{
    int i, count = 0;
    for(i = 0; i < SIZE; i++)
    {
        if(emp[i].sex == no)
        {
            count++;
        }
    }
    return count;
}

/*---------- Cau6 ----------/
void MangNhanVienTheoNamSinh(Employee emp[])
{
    Employee temp;
    int i, j;
	for(i = 0; i < SIZE; i++)
    {
        for(j = i + 1; j < SIZE; j++)
        {
		    if(emp[i].birthyear > emp[j].birthyear)
            {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
		
	}
}

/*---------- Cau7 ----------/                                 
void MangNhanVienTheoLuong(Employee emp[])
{
    Employee temp;
    int i, j;
	for(i = 0; i < SIZE; i++)
    {
        for(j = i + 1; j < SIZE; j++)
        {
		    if(emp[i].salary > emp[j].salary)
            {
                
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
	}
}

/*---------- Cau8 ----------/
void NhanVienLuongNhieuNhat(Employee *emp)
{
    int i = 0;
    int max = emp[0].salary;
    printf("\n %5s \t %18s \t %11s \t %14s \t %4s \t %17s", "ID", "Name", "Sex", "BirthYear", "Phone", "Salary");
    for (i = 0; i < SIZE; i++)
    {
        if(emp[i].salary > max)
        {  
            max = emp[i].salary;
        }
    }
    for (i = 0; i < SIZE; i++)
    {
        if(emp[i].salary == max)
        {  
            OutputDanhSach(emp[i]);
        }
    }
}

/*---------- Cau9 ----------/
void NhanVienItTuoiNhat(Employee *emp)
{
    int i = 0;
    int min = emp[0].birthyear;
    printf("\n %5s \t %18s \t %11s \t %14s \t %4s \t %17s", "ID", "Name", "Sex", "BirthYear", "Phone", "Salary");
	for(i = 0; i < SIZE; i++)
    {
		if(emp[i].birthyear > min)
        {
			min = emp[i].birthyear;
		}
	}
    for(i = 0; i < SIZE; i++)
    {
		if(emp[i].birthyear == min)
        {
            OutputDanhSach(emp[i]);
		}
	}
}

/*---------- Cau10 ----------*/
void XoaNhanVien(Employee *emp, int n)
{
    int i, j, k, id;
    Employee emmp[n];
    printf(" Nhap ID nhan vien can xoa: ");
    scanf("%d", &id);
    printf("\n");

	for (i = 0; i < n; i++) 
	{
        if(emp[i].id == id)
        {   
            emp[i] = emp[i + 1];
            for (j = i + 1; j < n; j++)
            {
                emp[j] = emp[j + 1];	 	      
            } 
        }
    }
}