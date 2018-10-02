#include <stdio.h>//在dev c++ 中可以运行
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