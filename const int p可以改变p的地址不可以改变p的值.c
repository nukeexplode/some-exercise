#include <stdio.h>
int main()
{
	const int *p;
	int a[] = {1, 2, 3};
	int n, i;
	int total = 0;
	
	p = a;
	printf(" %d %p", *p, p);
	p++;
	//*p = 3;c:12:5: error: assignment of read-only location '*p'
	printf(" %d %p", *p, p);
	
	system("pause");
	return 0;
}