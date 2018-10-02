#include <stdio.h>
int main()
{
	char a[34];
	char j;
	scanf("%s", a);
	scanf("%c", &j);
	printf("%s %f", a, j);//j没输出值来
	
	system("pause");
	return 0;
}