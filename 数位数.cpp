#include <stdio.h>

int main()
{
	int num;
	int n = 0;
	
	printf("������Ҫȷ��λ��������");
	scanf("%d",&num);
	
	n++;
	num /= 10;
	while( num > 0 ){
		n++;
		num /= 0;
	}
	return 0;
}
