#include <stdio.h>

void swap(int *a, int *b);
int main(void)
{
	int a = 5;
	int b = 6;
	swap(&a, &b);
	printf("a=%d b=%d", a, b);
	
	system("pause");
	return 0;
}

void swap(int *a, int *b)
{
	int p;
	p = *a;
	*a = *b;
	*b = p;
}