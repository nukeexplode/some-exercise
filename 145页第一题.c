#include <stdio.h>
int main()
{
	int a[] = {1,4,56,4,554,7,23423,52,234,345};
	int i;
	for( i =0; i<sizeof(a)/sizeof(int); i++) {
		if( a[1]<a[i] ) {
			a[1] = a[i];
		}
		if( a[sizeof(a)/sizeof(int)-1]>a[i] ) {
			a[sizeof(a)/sizeof(int)-1] = a[i];
		}
	}
	printf("%d %d", a[1], a[sizeof(a)/sizeof(int)-1]);
	
	system("pause");
	return 0;
}