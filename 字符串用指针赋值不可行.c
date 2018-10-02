#include <stdio.h>
int main()
{
	char *a = "title";
	char *s;
	s = a;
	
	printf("a= %p", s);
	printf("a= %p", a);//两个地址是一样的并没有出现新的数组
	
	system("pause");
	return 0;
}