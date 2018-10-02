#include <stdio.h>

int main(void)
{
	int a[10];
	int b;
	int *u = &b;
	int *p = a;
	printf("&*=%p\n", &*u);
	printf("&b=%p\n", &b);
	printf("&*p=%p\n", &*p);
	printf("a[]=%p\n", a);
	
	system("pause");
	return 0;
}