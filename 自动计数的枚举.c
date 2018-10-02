#include <stdio.h>
enum color{red, green, yellow, numcolors};//相当于int red = 0;.......
int main()
{
	int color = -1;
	char *colornames[numcolors] = {//这是一个指针数组
		"red", "yellow", "green",
	};
	char *colorname = NULL;
	
	scanf("%d", &color);//想想怎么输入字符得到结果
	if ( color >=0 && color < numcolors ) {
		colorname = colornames[color];
	}else {
		colorname = "unkown";
	}
	printf("%s", colorname);
	
	system("pause");
	return 0;
}