#include <stdio.h>

int main(void)
{
	int a[]={100,2,3,4,5,6,7,8,9};
	int min, max;
	printf("main sizeof(a)=%ld\n", sizeof(a));
	printf("main a=%p\n", a);
	minmax(a, sizeof(a)/sizeof(a[0]), &min, &max);
	printf("min=%d, max=%d", min, max);
	
	system("pause");
	return 0;
}

void minmax(int a[], int len, int *min, int *max)
{
	int i;
	printf("minmax sizeof(a)=%ld\n", sizeof(a));//实际上a[]是一个指针
	printf("minmax a=%p\n", a);
	*min = *max = a[0];
	for( i=1; i<len; i++ ) {
		if( a[i]<*min ) {
			*min = a[i];
		}
		if( a[i]>*max ) {
			*max = a[i];
		}
	}
}