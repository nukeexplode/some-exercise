#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "abc";
	char s2[] = "Abc";
	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", 'a'-'A');

	system("pause");
	return 0;
}