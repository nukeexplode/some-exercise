#include <stdio.h>
typedef struct date{
	int month;
	int day;
	int year;
} p;
int main()
{
	p ded = {1,12,12};
	printf("%i %i %i", ded.month, ded.day, ded.year);
	
	system("pause");
	return 0;
}