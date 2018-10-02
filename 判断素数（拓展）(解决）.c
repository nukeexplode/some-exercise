#include <stdio.h>
int main()
{
	int x, n, count = 0;
//	scanf("%d %d", &begin, &end);
 	for ( x=1; count<50; x++ ) {
		int isprime = 1;
		for ( n=2; n<x; n++) {
			if ( x % n == 0 ){
				isprime = 0;
				break;
		}
	}
		if ( isprime == 1 ) {
			count++;
			printf("%d ", x);
			if ( count%5 == 0 ) {
				printf("\n\t");
			}
		}
	}
	system("pause");
	return 0;
}