#include <stdio.h>
int main(void)
{
	char a = -1;
	int b = -1;
	
	printf("����int=%d, ����unsigned int=%u, sizeof(a)=%d\n", a, a, sizeof(a));//Ϊʲô%u��4294967295����255???????
	printf("����int=%d, ����unsigned int=%u, sizeof(a)=%d", b, b, sizeof(b));
	
	system("pause");
	return 0;
}