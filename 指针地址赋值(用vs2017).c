#include <stdio.h>
int main()
{
	int n = 5;
	double x;
	int * p1 = &n;
	double * pd = &x;
	printf("%p %p ", pd, p1);
	x = n;
	pd = p1;
	
	printf("%p %p ", pd, p1);
	system("pause");
	return 0;
}