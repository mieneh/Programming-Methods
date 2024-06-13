#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    int employeeid;
    char firstname[30];
    char lastname[30];
    char gender[20];
    char dateofbirth[20];
    int department;
    char country[20];
} Employee;

typedef struct 
{
    int employeeid;
    int projectid;
    float progress;
} Progress;

// Doc cac file
void DanhSachNhanVien(Employee *nv);
void DanhSachTienDo(Progress *prog);
void InDanhSach(Employee nv);
void XuatFile(Employee *nv, int SIZE);

// Xu li cau lenh
void DieuKien(char caulenh[]);
void KetThuc();
char *strlwr(char *str);

// Xu li cac lenh duoc goi
void Count(Employee *nv, int SIZE, char *word);
void ListFemale(Employee *nv, int SIZE);
void ListMale(Employee *nv, int SIZE);
void Report(Progress *prog, int SIZE, char *word);
void Average(Progress *prog, int SIZE, char *word);
void SortAsc(Employee *nv, int SIZE);
void SortDesc(Employee *nv, int SIZE);
void FirstNameAsc(Employee *nv, Employee temp, int i, int j);
void Country(Employee *nv, int SIZE, char *word);

int main()
{
    FILE *file1 = fopen("Employee.csv", "r");
    FILE *file2 = fopen("Progress.csv", "r");
    
    if (file1 == NULL || file2 == NULL)
    {
        exit(1);
    } 
    
    char p[1024];
    int n = 0;
    while (fgets(p, 1024, file1) != NULL)
    {
        n++;
        if(n == 1)
            continue;
    }
    int SIZE = n - 1;
    Employee nv[SIZE];
    DanhSachNhanVien(nv);

    char q[1024];
    int m = 0;
    while (fgets(q, 1024, file2) != NULL)
    {
        m++;
        if(m == 1)
            continue;
    }
    Progress prog[m - 1];
    DanhSachTienDo(prog);

    char caulenh[50];
    fgets(caulenh, sizeof(caulenh), stdin);
    DieuKien(caulenh);
    int a = 0;
    if(strstr(strlwr(caulenh), "female"))
    {    
        ListFemale(nv, SIZE);
    }
    else if(strstr(strlwr(caulenh), "male"))
    {
        ListMale(nv, SIZE);
    }
    else if(strstr(strlwr(caulenh), "asc"))
    {  
        SortAsc(nv, SIZE);
        XuatFile(nv, SIZE);
    }
    else if(strstr(strlwr(caulenh), "desc"))
    {    
        SortDesc(nv, SIZE);
        XuatFile(nv, SIZE);
    }
    else
    {
        char *value = strtok(caulenh, " ");
        while(value)
        {   
            char *word = strtok(NULL, " ");
            if(strcmp(strlwr(value), "count") == 0)
            {
                Count(nv, SIZE, word);
                break;
            }
            else if(strcmp(strlwr(value), "report") == 0)
            {
                for(a = 0; a < strlen(word); a++)
                {
                    if(word[a] >= 'a' && word[a] <= 'z' || word[a] >= 'A' && word[a] <= 'Z')
                    {
                        KetThuc();
                        exit(1);
                    }
                }
                Report(prog, m, word);
                break;
            }   
            else if(strcmp(strlwr(value), "average") == 0)
            {
                Average(prog, m, word);
                break;
            }
            else if(strcmp(strlwr(value), "country") == 0) 
            {
                Country(nv, SIZE, word);
                break;
            }
            else
            {    
                KetThuc();
                break;
            }
        }
    }

    fclose(file1);
    fclose(file2);
    return 0;
}

void DanhSachNhanVien(Employee *nv)
{
    FILE *infile = fopen("Employee.csv", "r");
    if (infile == NULL)
    {
        exit(1);
    } 
    char buff[1024];
    int n = 0, i = 0, line = 1, count = 1;
    while (fgets(buff, 1024, infile) != NULL)
    {
        if (line != count)
        {
            n = 0;
            char *value = strtok(buff, ",");
            while (value)
            {
                if(n == 0)
                    nv[i].employeeid = atoi(value);
                if(n == 1)
                    strcpy(nv[i].firstname, value);
                if(n == 2)
                    strcpy(nv[i].lastname, value);
                if(n == 3)
                    strcpy(nv[i].gender, value);
                if(n == 4)
                    strcpy(nv[i].dateofbirth, value);
                if(n == 5)
                    nv[i].department = atoi(value);
                if(n == 6)
                    strcpy(nv[i].country, value);
                value = strtok(NULL, ",");
                n++;
            }
            i++;
        }
        count++;
    }
    fclose(infile);
}

void DanhSachTienDo(Progress *prog)
{
    FILE *infile = fopen("Progress.csv", "r");
    if (infile == NULL)
    {
        exit(1);
    } 
    char buff[1024];
    int n = 0, i = 0, line = 1, count = 1;
    while (fgets(buff, 1024, infile) != NULL)
    {
        if (line != count)
        {
            n = 0;
            char *value = strtok(buff, ",");
            while (value)
            {
                if(n == 0)
                    prog[i].employeeid = atoi(value);
                if(n == 1)
                    prog[i].projectid = atoi(value);
                if(n == 2)
                    prog[i].progress = atof(value);
                value = strtok(NULL, ",");
                n++;
            }
            i++;
        }
        count++;
    }
    fclose(infile);
}

void InDanhSach(Employee nv)
{
    FILE *outfile = fopen("Result.csv", "a");
    if (outfile == NULL)
    {
        exit(1);
    }
    fprintf(outfile, "%d,%s,%s,%s,%s,%d,%s", nv.employeeid, nv.firstname, nv.lastname, nv.gender, nv.dateofbirth, nv.department, nv.country);
    fclose( outfile);
}     

void XuatFile(Employee *nv, int SIZE)
{
    int i = 0;
    for(i = 0; i < SIZE; i++)
	{
		InDanhSach(nv[i]);
	}
}

void DieuKien(char *caulenh)
{
    int i = 0, khoangtrang = 0, sotu = 0; 
    for(i = 0; i < strlen(caulenh); i++)
    {
        if(caulenh[i] >= '0' && caulenh[i] <= '9' || caulenh[i] >= 'A' && caulenh[i] <= 'Z' || caulenh[i] >= 'a' && caulenh[i] <= 'z'|| caulenh[i] == ' ')
        {    
            if(caulenh[i] == ' ')
                khoangtrang++;
            if(caulenh[i - 1] == ' ' && caulenh[i] != ' ' || caulenh[0] != ' ')
                sotu++;
        }
    }
    if(khoangtrang != 1 && sotu != 2)
    {
        KetThuc();
        exit(1);
    }
}

void KetThuc()
{
    FILE *outfile = fopen("check.txt", "w");

    if (outfile == NULL)
    {
        exit(1);
    }

    fprintf(outfile, "wrong syntax.");
    fclose(outfile);
}

char *strlwr(char *str)
{
    unsigned char *p = (unsigned char *)str;
    while (*p) 
    {
        *p = tolower((unsigned char)*p);
        p++;
    }
    return str;
}

void Count(Employee *nv, int SIZE, char *word)
{
    FILE *outfile = fopen("Result.csv", "a");
    int i = 0, count = 0;
    int department = atoi(word);
    for(i = 0; i < SIZE; i++)
    {
        if(nv[i].department == department)
        {
            count++;
        }
    }
    fprintf(outfile, "%d\n", count);
    fclose(outfile);
}

void ListFemale(Employee *nv, int SIZE)
{
    int i = 0;
    for(i = 0; i < SIZE; i++)
    {
		if(strcmp(nv[i].gender, "Female") == 0)
        {
			InDanhSach(nv[i]);
        }
	}
}

void ListMale(Employee *nv, int SIZE)
{
    int i = 0;
    for(i = 0; i < SIZE; i++)
    {
		if(strcmp(nv[i].gender, "Male") == 0)
        {
			InDanhSach(nv[i]);
        }
	}
}

void Report(Progress *prog, int m, char *word)
{
    FILE *outfile = fopen("Result.csv", "a");
    float n = atof(word);
    if(n < 0 || n > 9)
    {
        KetThuc();
        exit(1);
    }
    int count = 0, i = 0;
    for(i = 0; i < m - 1; i++)
    {
        if(prog[i].progress == n)
        {
            fprintf(outfile,"%d\n", prog[i].employeeid);
            count++;
        }
    }
    if(count == 0)
    {
        fprintf(outfile,"\n");
    }
    fclose(outfile);
}

void Average(Progress *prog, int m, char *word)
{
    int i = 0, count = 0;
    for(i = 0; i < strlen(word); i++)
    {
        if(word[i] >= 'A' && word[i] <= 'Z' || word[i] >= 'A' && word[i] <= 'Z')
        {
            KetThuc();
            exit(1);
        }
    }
    FILE *outfile = fopen("Result.csv", "a");
    int x = atoi(word);
    float sum = 0;
    for(i = 0; i < m - 1; i++)    
    {
        if(prog[i].projectid == x)
        {
            sum += (float)prog[i].progress; 
            count++;
        }
    }
    float TBC = 0;
    if(count == 0)
    {
        fprintf(outfile, "%d\n", count);   
    }
    else
    {
        TBC = sum/count;
        fprintf(outfile, "%.3f\n", TBC); 
    }
    fclose(outfile);
}

void SortAsc(Employee *nv, int SIZE)
{
	Employee temp;
	int i = 0, j;
	for(i = 0; i < SIZE; i++) 
	{
		for(j = i + 1; j < SIZE; j++) 
		{
	     	if(strcmp(nv[i].lastname, nv[j].lastname) > 0) 
			{
                temp = nv[i];
                nv[i] = nv[j];
                nv[j] = temp;
	        }
            FirstNameAsc(nv, temp, i, j);
        }
	}
}

void SortDesc(Employee *nv, int SIZE)
{
    Employee temp;
	int i = 0, j;
	for(i = 0; i < SIZE; ++i) 
	{
		for(j = i + 1; j < SIZE; ++j) 
		{
	     	if(strcmp(nv[i].lastname, nv[j].lastname) < 0) 
			{
	            temp = nv[i];
	            nv[i] = nv[j];
		        nv[j] = temp;
	        }
            FirstNameAsc(nv, temp, i, j);
        }
    }
}

void FirstNameAsc(Employee *nv, Employee temp, int i, int j)
{   
 	if(strcmp(nv[i].lastname, nv[j].lastname) == 0)
    {
        if(strcmp(nv[i].firstname, nv[j].firstname) > 0)
        { 
            temp = nv[i];
            nv[i] = nv[j];
            nv[j] = temp;
        }
    }
}

void Country(Employee *nv, int SIZE, char *word)
{
    FILE *outfile = fopen("Result.csv", "a");
    int i = 0, count = 0;
    char key[20];
    strcpy(key, word);
    key[0] = toupper(key[0]);
    for(i = 0; i < SIZE; i++) 
    {
		if(strcmp(nv[i].country, key) == 0) 
        {
        	fprintf(outfile, "%d,%s,%s,%s,%s,%d,%s", nv[i].employeeid, nv[i].firstname, nv[i].lastname, nv[i].gender, nv[i].dateofbirth, nv[i].department, nv[i].country);
            count++;
        }
    }
    if(count == 0)
    {
        fprintf(outfile, "\n");
        exit(1);
    }
    fclose(outfile);
}