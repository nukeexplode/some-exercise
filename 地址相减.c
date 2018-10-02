#include <stdio.h>
int main()
{
	int *p;
	int a[]={100, 200, 300};
	p = &a[2];
	printf("%", p-a);
	
	
	system("pause");
	return 0;
}