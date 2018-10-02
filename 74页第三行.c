#include <stdio.h>
int main()
{
	char name[40];
	int a;
	scanf("%d", &a);//没有无视掉空格
	printf("%d", a);
	scanf("%s", name);//无视空格
	printf("%s", name);
	
	system("pause");
	return 0;
}