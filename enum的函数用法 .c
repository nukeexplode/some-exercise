#include <stdio.h>
enum color { red, yellow, green };//int ���͵�ֵ
void f(enum color c );
int main()
{
	enum color t = red;
	
	printf("%d", red);
	scanf("%d", &t);
	f(t);
	
	system("pause");
	return 0;
}

void f(enum color c ) 
{
	printf("%d\n", c);
}