#include<stdio.h>
int main(void)
{
	int i = 0;
	int p;
	p = (int)&i;
	printf("&i=%p\n", &i);
	printf("p=%p\n", p);
	printf("&p=%p\n", &p);
	printf("sizeof(&p)=%ld\n", sizeof(&p));
	printf("sizeof(int)=%ld\n", sizeof(int));
	
	system("pause");
	return 0;
}