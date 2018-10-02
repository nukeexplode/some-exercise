#include <stdio.h>

int main(void)
{
	int i;
	scanf("%d", &i);//去掉&在int为4字节,&o为8字节为什么没有报错
	printf("%p", &i);
	g(&i);
	
	system("pause");
	return 0;
}
//*p表示取得p代表的地址的变量
//&p表示取得p代表的地址
void g(int *i)
{
	printf("i=%p\n", i);//i在函数中变成了主函数中的i的地址&i变成了i的值!!!!!!
		if( i == *i ) {
		printf("%d", 1);
	}
	printf("*i=%d\n", *i);//*i不能在主函数运行
}