#include <stdio.h>
enum color{red, green, yellow};//�൱��red = 0;.......
int main()
{
	enum color t = green;
	printf("%\n", t);//ʵ������ͨ�����������ڲ�����������
	//Ҫ�������ֲ�����ĸ
	
	printf("%d %d %d", red, green, yellow);
	
	system("pause");
	return 0;
}