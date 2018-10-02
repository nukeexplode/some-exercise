#include <stdio.h>
enum color{red, green, yellow, numcolors};//Ïàµ±ÓÚint red = 0;.......
int main()
{
	char *c=0;
	c = "abcdef";
	char d[]="abcdef";
	char e[]={'a','b','c','d','e','f'};
	
	printf("sizeof(c):%d\tstrlen(c):%d\n",sizeof(c),strlen(c));
	printf("sizeof(d):%d\tstrlen(d):%d\n",sizeof(d),strlen(d));
	printf("sizeof(e):%d\tstrlen(e):%d\n",sizeof(e),strlen(e));

	
	system("pause");
	return 0;
}