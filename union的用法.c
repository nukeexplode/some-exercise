#include <stdio.h>
typedef union {
	int i;
	char ch[sizeof(int)];//共用一个内存空间
}CHI;

int main()
{
	CHI chi;
	int i;
	chi.i = 1234;
	for ( i=0; i<sizeof(int); i++ ) {
		printf("%02hx", chi.ch[i]);//可以看double的存储方式
	}
	printf("\n");
	
	system("pause");
	return 0;
}