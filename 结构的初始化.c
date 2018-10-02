#include <stdio.h>
struct date{
	int month;
	int day;
	int year;
};
int main()
{
	int i = 1;
	struct date today = {01,31,2014};
	struct date thismonth = {.month=7, .year=2014};
	printf("%p %p", today, &i);
	
	printf("%i %i %i\n", today.year, today.month, today.day);
	printf("%i %i %i", thismonth.year, thismonth.month, thismonth.day);
	
	system("pause");
	return 0;
}