#include <stdio.h>
int main()
{
	int a = 0;
	
	if( a>-1 || a++ ) {//�߼����ڵ�һ���ж���ȷ�󲻻������ڶ����ж�ͬ����
		printf("��");
	}
	printf("%d", a);
	
	system("pause");
	return 0;
}