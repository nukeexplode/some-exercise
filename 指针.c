#include <stdio.h>
int main(void)
{
	int i = 0;
	int p = 1;
	printf("%#p\n", &i);
	printf("%#p\n", &p);
	printf("%ld\n", sizeof(&p));
	
	system("pause");
	return 0;
}