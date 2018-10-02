#include <stdio.h>
int main(void)
{
	int a = 1;
	printf("%ld\n", sizeof(int));
	printf("%ld\n", sizeof(a++));
	printf("%d\n", a);
	
	getchar();
	return 0;
}