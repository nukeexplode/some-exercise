#include <stdio.h>
int main()
{
	int a; 
	int *p; 
	p = &a;
	p = p + 1;
	printf("%#p", p);
	
	system("pause");
	return 0;
}