#include <stdio.h>
int main()
{
	char *a = "title";
	char *s;
	s = a;
	
	printf("a= %p", s);
	printf("a= %p", a);//������ַ��һ���Ĳ�û�г����µ�����
	
	system("pause");
	return 0;
}