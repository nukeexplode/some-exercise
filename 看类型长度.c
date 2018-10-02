#include <stdio.h>
int main(void)
{
	long int a = 1;
	printf("%ld\n", sizeof(char));
	printf("%ld\n", sizeof(short));
	printf("%ld\n", sizeof(int));
	printf("%ld\n", sizeof(long));
	printf("%ld\n", sizeof(long long));
	printf("%ld\n", sizeof(float));
	
	getchar();
	return 0;
}