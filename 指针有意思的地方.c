#include <stdio.h>
int main()
{
	char *string = NULL;
	printf("string = %p", string);
	scanf("%d", &string);
	printf("%d", string);
	printf("%d", *string);//±¿¿£
	
	
	system("pause");
	return 0;
}