#include <stdio.h>
#define SIZE 4
int main()
{
	double a[SIZE];
	double *p;
	int i;
	
	p = a;
	for(i=0; i<4; i++ ) {
		printf("%p\n", p+i);
	};
	
	system("pause");
	return 0;
}