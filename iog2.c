#include <stdio.h>

int main()
{
	int x, start;
	scanf("%d",&x);
	int ret = 0;
	start = x;
	while( x > 1 ){
		x = x / 2;
		ret++;
	}
	printf("log2 of %d is %d", start, ret);
	
	system("pause");
	return 0;
}