#include <stdio.h>
int main()
{
	int *p;
	int a[]={100, 200, 300};
	p = a+3;
	p = &a[2];
	printf("%p %p %d\namespace", &a[2], p, *p);
	p = a+4;
	printf("%p %d", p - 6, *(p-6));
	
	system("pause");
	return 0;
}