#include <stdio.h>
int main()
{
	struct today{
		int month;
		int day;
		int year;
	}p1, p2;
	p1.month = 07;
	p1.day = 31;
	p1.year = 2014;
	
	printf("%i %i", p1.month, p1.day);
	
	system("pause");
	return 0;
}