#include <stdio.h>
int main()
{
	int x, i, times[10];
	for( i=0; i<10; i++ ) {
		times[i] = 0;
	}
	scanf("%d", &x);
	while( x!=-1 ) {
		if( x>-1 &&x<10 ) {
		times[x] ++;	
		}
		scanf("%d", &x);
	}
	for( i=0; i<10; i++ ) {
		printf("%d\n", times[i]);
	}

	
	system("pause");
	return 0;
}