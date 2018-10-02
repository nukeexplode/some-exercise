#include <stdio.h>
#define PRAISE "i expect my approaching waifu"
int main()
{
	char name[40];
	scanf("%s", name);
	printf("%d %u", strlen(name), sizeof(name));
	printf("%d %u", strlen(PRAISE), sizeof(PRAISE));
	
	system("pause");
	return 0;
}