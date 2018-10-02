#include <stdio.h>
int main()
{
	char a;
	
	printf("%d\b9\n%d.....", 123, 456);
	printf("%d\b%d\n%d.....", 123, 9, 456);
	printf("123\b%d\n456.....", 9);
	
	system("pause");
	return 0;
}