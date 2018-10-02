#include <stdio.h>

void f(int *p);
void k(int k);
int main(void)
{
	int p=6;
	printf("&p=%p\n", &p);
	f(&p);//地址可以给指针,指针不可以给地址{f(*p)}
	//地址给函数,指针不能给函数
	g(p);
	
	system("pause");
	return 0;
}

void f(int *p)
{
	printf("p=%p\n", p);
	printf("*p=%d\n", *p);
	*p = 26;
}

void g(int k)
{
	printf("k=%d\n", k);
	printf("&k=%p", &k);
}