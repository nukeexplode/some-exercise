 #include <stdio.h>
struct date{
	int month;
	int day;
	int year;
} myday;
int main()
{
	myday = (struct date) {1,2,4};
	struct date *p = &myday;
	
	printf("%i %i", (*p).month, p->month);
	
	system("pause");
	return 0;
}