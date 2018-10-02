#include <stdio.h>
enum color { red, yellow, green, numcolors};//int 类型的值
int main()
{
	int color = -1;
	char *colorname[numcolors] = {
		"red", "yellow", "green"//指针数组
	};
	printf("%p %p\n", colorname, &color);//查看地址
	char *colornames = NULL;
	
	scanf("%d", &color);
	if( color >=0 && color < numcolors ) {
		colornames = colorname[color];
	}else {
		colornames = "unkown";
	}
	printf("%s", colornames);
	
	system("pause");
	return 0;
}
