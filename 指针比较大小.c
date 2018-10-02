#include <stdio.h>
int main()
{
	int a[] = {1,23,4};
	int b[] = {1,23,4};
	int *p, *q;
	p = a;
	q = b;
	printf("%p", q);
	printf("%p", p);
	printf("%d", p>q);
		
	system("pause");
	return 0;
}