#include <stdio.h>
int main()
{
	int i = 0;
	int p;
	p = (int)&i;
	printf("%#p\n", &i);
	printf("%#p\n", &p);
	printf("%lu\n", sizeof(i));
	printf("%lu\n", sizeof(p));
	printf("%lu\n", sizeof(&i));
	printf("%lu\n", sizeof(&p));
	
	system("pause");
	return 0;
}