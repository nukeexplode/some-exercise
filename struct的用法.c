#include <stdio.h>
int main()
{
	struct date {
		int month;
		int day;
		int year;
	};//���Է���main��������;��������ʹ��
	
	struct date today;
	
	today.month = 07;
	today.day = 31;
	today.year = 2014;
	
	printf("%i %i %i", today.year, today.month, today.day);
	
	system("pause");
	return 0;
}