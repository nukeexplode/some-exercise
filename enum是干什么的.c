#include <stdio.h>
enum color{red, green, yellow};//相当于red = 0;.......
int main()
{
	enum color t = green;
	printf("%\n", t);//实际上是通过整数来做内部输入和输出的
	//要输入数字不是字母
	
	printf("%d %d %d", red, green, yellow);
	
	system("pause");
	return 0;
}