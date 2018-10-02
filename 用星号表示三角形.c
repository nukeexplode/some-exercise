#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int i,j = 0,k;
	for( i=0; i<x; i++ ) {
		for( j=0; j<x-i; j++ ) {
			printf(" ");
		}
		for( k=0; k<2*i+1; k++){
			printf("*");
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}