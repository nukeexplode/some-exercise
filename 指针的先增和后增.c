#include <stdio.h>
int main()
{
	int a[]={100,200,300,400,500,600};
	int *p1, *p2, *p3, i;
	 p1 = a;
	 p2 = a;
	 p3 = a;
	for( i=0; i<6; i++ ) {
		printf("%d", a[i]);
	}
	printf("\n");
	printf("%d %d %d\n", *++p1, *p2++, *(p3++));
	printf("%d %d %d\n", *++p1, *p2++, *(p3++));
	
	system("pause");
	return 0;
}