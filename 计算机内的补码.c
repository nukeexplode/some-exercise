/*
mooc7.1(3)
���Ƽ����
*/
#include <stdio.h>
int main(void)
{
	char a = 1, b = 255, c = 254, d = 256;
	printf("a-(10)=%d\n", a-(-10));//00001000-
	printf("a-10=%d\n", a-10);
	printf("b=%d\n", b);//-1�ڼ�����ڵĲ�����1111 1111
	printf("c=%d\n", c);
	printf("d=%d\n", d);
	printf("���϶�char����\n");
	{
		int a = 1, b = 65535, c = 255, d = 4294967295;
		printf("a=%d, b=%d\n", a, b);
		printf("b=%d\n", b);
		printf("c=%d\n", c);
		printf("d=%d\n", d);
		printf("���϶�int����\n");
	}
	{
		unsigned int a = 4294967295, b =4294967296, c=4294967297;
		printf("%d\n", a);
		printf("%d\n", b);
		printf("%d\n", c);
	}
	system("pause");
	return 0;
}