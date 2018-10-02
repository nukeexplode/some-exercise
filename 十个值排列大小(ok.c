#include <stdio.h>
int main()
{
	int a[10] = { 3,6,4,8,9,1,2,7,5,0};
	int i, j, k, l;
	
	int copy[10];

	for( i=0; i<9; i++) {
		for( j=i+1; j<10; j++ ) {
			for( k=0; k<10; k++ ) {
				printf("%d ", a[k]);
			}
			printf("\n");
			if( a[i]>a[j] ) {
				l = a[j];
				a[j] = a[i];
				a[i] = l;
			}
		}
		printf("\n");
	 }
	 	for( k=0; k<10; k++ ) {
		printf("%d", a[k]);
	}
		
	system("pause");
	return 0;
}