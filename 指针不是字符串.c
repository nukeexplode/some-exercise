#include <stdio.h>
int main()
{
	int i=0;
	char *s = "hello world";     //这两个字符串的地址是一样的所以指向的是同一个字符串
	// s[0] = 'b';                这两个字符串的地址是一样的所以指向的是同一个字符串
	char *s2 = "hello world";    //这两个字符串的地址是一样的所以指向的是同一个字符串
	//s和s2指向的程序的代码端是只读的
	//如果要改变字符串要用字符数组
	printf("s=%p\n", & i);
	printf("&s[0]=%p\n", &s[0]);
	printf("s=%p\n", s);
	printf("s2=%p\n", s2);
	printf("s[0] = %c", s[0]);
	
	system("pause");
	return 0;
}