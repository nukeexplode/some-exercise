#include <stdio.h>
struct date{
	int month;
	double day;
	int year;
} p1, p2;
int main()
{
	p1 = (struct date) {1,1.2,12};
	printf("%i %i %i", p1.month, p1.day, p1.year);
	
	system("pause");
	return 0;
}