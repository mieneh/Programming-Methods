#include <stdio.h>
int main()
{
	/*-- Nhap du lieu --*/
	int n = 0;
	printf("Convert days : ");
	scanf("%d",&n);
	
	/*-- Giai quyet thuat toan --*/
	int day =  (n % 365) % 7;
	int week = (n % 365) / 7; 
	int year = n / 365;
	printf("into %d years %d weeks %d days", year, week, day);
	
	return 0;
}
