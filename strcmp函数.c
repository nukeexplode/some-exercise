#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "abc";
	char s2[] = "abc";
	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", s1 == s2);//������Զ�����
	
	
	if( strcmp(s1, s2) == 0 ) {
		printf("����if����д\n");
	}
{
	printf("-----------------------\n");
	char s1[] = "abc";
	char s2[] = "BCc";
	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", 'a'-'A');
	
}
	
	system("pause");
	return 0;
}

