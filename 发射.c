#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	while ( n>= 0 ) {
		n--;
		printf("%d",n);
	}
	printf("����\n");
	
	system("pause");
	return 0;
}