#include <stdio.h>
int main()
{
	int a = 0;
	
	if( a>-1 || a++ ) {//逻辑或在第一个判断正确后不会再做第二个判断同理与
		printf("到");
	}
	printf("%d", a);
	
	system("pause");
	return 0;
}