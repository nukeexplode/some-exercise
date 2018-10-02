#include <stdio.h>
int main()
{
	struct date {
		int month;
		int day;
		int year;
	};//可以放在main函数外面;供其他函使用
	
	struct date today;
	
	today.month = 07;
	today.day = 31;
	today.year = 2014;
	
	printf("%i %i %i", today.year, today.month, today.day);
	
	system("pause");
	return 0;
}