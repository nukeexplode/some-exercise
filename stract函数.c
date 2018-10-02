#include <stdio.h>
#include <string.h>
int main()
{
	char a[] = {"hello"};
	char b[] = {"world"};
	
	strcat( a, b );
	printf("%s", a);
	
	system("pause");
	return 0;
}