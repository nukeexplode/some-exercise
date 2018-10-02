#include <stdio.h>
struct date{
	int month;
	int day;
	int year;
} p1, p2;
int main()
{
	p1 = (struct date){2,10};
	
	printf("%i %i %i\n", p1.month, p1.day, p1.year);
	p2 = p1;
	printf("%i %i %i", p2.month, p2.day, p2.year);
	struct date *pdate = &p1;//要这样取结构的地址
	printf("%p", pdate);
	
	system("pause");
	return 0;
}