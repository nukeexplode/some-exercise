#include <stdio.h>
int main()
{
	int a[] = {1,4,56,4,554,7,23423,52,234,345};
	int i, j, k;
	
	for( i=0; i<sizeof(a)/sizeof(int); i++) {
		for( j=0; j<sizeof(a)/sizeof(int); j++) {
			if( a[i]<a[j] ){
				k = a[i];
				a[i] = a[j];
				a[j] = k;
			}
		}
	}
	for( k=0; k<10; k++ ) {
		printf("%d \n", a[k]);
	}
	
	
	int x;
	int y;
	y = sizeof(a)/sizeof(int)/2;
	scanf("%d", &x);											
	while( x != a[(int)y] ) {
			if( x<a[(int)y] ) {
				y /= 2;
			}else if( x>a[(int)y] ) {
				y = /2;
			}
		}
		printf("%d", a[(int)y]);
	
	system("pause");
	return 0;
}
