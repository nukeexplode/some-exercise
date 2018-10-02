#include <stdio.h>

int main()
{
	int n = 0;
	int num;
	
	printf("请输入要数位数的数");
	scanf("%d",&num);
	
	n++;
	num /= 10;
	while ( num > 0 ) {
		n++;
		num /= 10;
	}
	printf("位数是%d",n);
	system("pause");
	return 0;
}