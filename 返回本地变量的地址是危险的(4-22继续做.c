#include <stdio.h>//��dev c++ �п�������
int* f();
void g(void);
int main()
{
	int *p = f();
	printf("*p=%d", *p);
	g();
	printf("*p=%d", *p);
		
	system("pause");
	return 0;
}

int* f()
{
	int i = 12;
	return &i;
} 

void g(void)
{
	int k = 24;
	printf("k =%d", k);
}