#include <stdio.h>
int main()
{
	char a;
	
	scanf("%c", &a);
	a += 'A'-'a';
	printf("%c ", a);
	
	system("pause");
	return 0;
}