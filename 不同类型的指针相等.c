#include <stdio.h>
int main()
{
	int a[] = {1};
	char b[] = {'1','23','4','2'};
	int *p;
	char *q;
	p = b;
	q = b;
	*p = 0;
	printf("%p\n", p);
	printf("%d %d %d %d", b[0],b[1],b[2],b[3]);//int 类型的指针导致char的数组四个都是零
		
	system("pause");
	return 0;
}