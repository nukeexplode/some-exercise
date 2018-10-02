#include <stdio.h>
int main()
{
	char s[] = "hello";
	// char *p = strchr(s, 'l');
	// printf("%s\n", p);输出llo,并且p的地址变成了第一个l的地址
	// char *p = //strchr(p+1, 'l')//;
	// printf("%s\n", p);崩溃原因指针指向地址错误
	// char *p = strchr(s, 'l');
	// p = strchr(p+1, 'l');
	// printf("%s\n", p);strchr输出lo
	int *k = s;
	char *p = strchr(s, 'l');
	p = strchr(p+1, 'l');
	*p = '\0';
	printf("%s\n", k);//输出前面的字符
	
	system("pause");
	return 0;
}