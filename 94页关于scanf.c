#include <stdio.h>
int main()
{
	int i;
	scanf("%d", &i);//输入除+-符号外的符号都会得零,连后面的scanf都不会执行,可以换成%x
	printf("%d", i);
	int m, n;
	scanf("%d,%d", &m, &n);
	
	system("pause");
	return 0;
}