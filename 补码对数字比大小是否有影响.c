#include <stdio.h>
int main()
{
	char a = 1, b = -1;
	if( b>a ) {
		printf("是的");
	}else{
		printf("a=%d b=%d", a, b);
		printf("不是");
	}
	
	system("pause");
	return 0;
}