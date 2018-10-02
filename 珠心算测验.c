#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int a[x];
	int i;
	for( i=0; i<x; i++ ) {
		scanf("%d", &a[i]);
	}
	int j, k, e;
	int cnt = 0;
	int b[x];
	for( j=0; j<x; j++ ) {
		for( k=0; k<x; k++ ) {
			if( a[j] != a[k] ) {
				for( e=0; e<x; e++ ) {
					//printf("%d %d %d", a[j], a[k], a[e]);
					if( a[k]+a[j] == a[e] ) {
						b[e] = 1;
						//printf(" yes");
					}
					//printf("\n");
				}
			}
		}
	}
	for( j=0; j<x; j++ ){
		if( b[j] == 1 ) {
			cnt++;
		} 
	}
	printf("%d", cnt);
	
	system("pause");
	return 0;
}