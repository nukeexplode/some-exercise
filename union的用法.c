#include <stdio.h>
typedef union {
	int i;
	char ch[sizeof(int)];//����һ���ڴ�ռ�
}CHI;

int main()
{
	CHI chi;
	int i;
	chi.i = 1234;
	for ( i=0; i<sizeof(int); i++ ) {
		printf("%02hx", chi.ch[i]);//���Կ�double�Ĵ洢��ʽ
	}
	printf("\n");
	
	system("pause");
	return 0;
}