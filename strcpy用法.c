#include <stdio.h>
#include <string.h>

int main()
{ 
	char a[80]={ "abcde" };
	char b[256]={"asdfsa"};
	strcpy(b,a);
	printf("%s\n",b);
	
	system("pause");
	return 0;
}