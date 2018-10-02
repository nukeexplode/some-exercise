#include <stdio.h>
int main()
{
	int a[][2] = {{2,3}, {3,4}};
	int *p;
	int (*p1)[2];
	int **p2;
	
		
	
	printf("%p %p %p", p, p2, *p2);
	
	system("pause");
	return 0;
}