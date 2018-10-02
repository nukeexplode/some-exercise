// int * const q = &i;q指针指向i的地址不能在改变
// *q = 26  ok!!!!!
#include<stdio.h>
int main(void)
{
	int i;
	int *const q = &i;
	*q = 26;//可以修改i的值
	//但是不能做q++的运算
	printf("%p, %p, %d", &*q, &i, i);
	
	system("pause");
	return 0;
}