#include <stdio.h>
enum color { red, yellow, green, numcolors};//int ���͵�ֵ
int main()
{
	int color = -1;
	char *colorname[numcolors] = {
		"red", "yellow", "green"//ָ������
	};
	printf("%p %p\n", colorname, &color);//�鿴��ַ
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
