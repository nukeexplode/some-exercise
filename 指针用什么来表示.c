#include <stdio.h>

int main(void)
{
	int i;
	int* p = &i;
	
	printf("%d", p);
	
	system("pause");
	return 0;
}