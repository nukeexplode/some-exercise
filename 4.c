#include <stdio.h>
int main(void)
{
	int x = 100;
	
	printf("num=%d 8 = %o 16 = %x\n",x,x,x);
	printf("num = %#d,8 = %#o 16 = %#x\n",x,x,x);
	
	getchar();
	return 0;
}
	