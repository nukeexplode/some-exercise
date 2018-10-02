#include <stdio.h>
int main()
{
	int a[10];
	for( int i=0; i<10; i++ ){
		//extern int a[];
		a[i]= i;
	}
	for( int i=0; i<10; i++ ){
		printf("%d ", a[i]);
		
	}
	
	return 0;
}
