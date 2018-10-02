#include <stdio.h>
int main()
{
	char name1[5], name2[5];
	int count;
	
	while((count=scanf("%5s %10s", name1, name2)) == 2)
		printf("%d %s %s\n", count, name1, name2);//»’¡Àπ∑¡Àcnm
	
	system("pause"); 
	return 0;
}