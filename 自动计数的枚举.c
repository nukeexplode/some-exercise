#include <stdio.h>
enum color{red, green, yellow, numcolors};//�൱��int red = 0;.......
int main()
{
	int color = -1;
	char *colornames[numcolors] = {//����һ��ָ������
		"red", "yellow", "green",
	};
	char *colorname = NULL;
	
	scanf("%d", &color);//������ô�����ַ��õ����
	if ( color >=0 && color < numcolors ) {
		colorname = colornames[color];
	}else {
		colorname = "unkown";
	}
	printf("%s", colorname);
	
	system("pause");
	return 0;
}