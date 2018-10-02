#include <stdio.h>
int main()
{
	char a[100] = "";
	char b[] = "";
	
	printf("a[0]=%d", a[0]);
	printf("b[0]=%d", b[0]);
	
	a[0] = 'a';
	a[1] = 'a';
	b[0] = 'b';
	b[1] = 'b';
	
	printf("a[0]=%d;a[0]=%d", a[0], a[1]);
	printf("b[0]=%d;b[0]=%d", b[0], b[1]);//??????b[1]不是应该没有的吗
	
	system("pause");
	return 0;
}