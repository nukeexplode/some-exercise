#include <stdio.h>

int main()
{
	int n = 0;
	int num;
	
	printf("������Ҫ��λ������");
	scanf("%d",&num);
	
	n++;
	num /= 10;
	while ( num > 0 ) {
		n++;
		num /= 10;
	}
	printf("λ����%d",n);
	system("pause");
	return 0;
}