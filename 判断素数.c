#include <stdio.h>

int main()
{
	int x;
	
	scanf("%d", &x);
	
	int n;
	int isprime = 1;
	for( n=2; n<x; n++ ) {
		if ( x % n == 0 ) {
			isprime = 0;
		}
	}
	if ( isprime == 1 ) {
		printf("������\n");
	}else {
		printf("��������\n");
	}
	system("pause");
	return 0;
}