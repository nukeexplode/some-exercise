#include <stdio.h>
int main(void)
{
	char a = -1;
	int b = -1;
	
	printf("看作int=%d, 看作unsigned int=%u, sizeof(a)=%d\n", a, a, sizeof(a));//为什么%u是4294967295不是255???????
	printf("看作int=%d, 看作unsigned int=%u, sizeof(a)=%d", b, b, sizeof(b));
	
	system("pause");
	return 0;
}