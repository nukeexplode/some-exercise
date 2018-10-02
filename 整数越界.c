//整数越界
#include <stdio.h>
int main(void)
{
	char a = 127;
	printf("%d", ++a);
	
	getchar();
	return 0;
}