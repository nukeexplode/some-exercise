#include <stdio.h>
int main()
{
	int x;
	//scanf("%d", &x);
	
	x = 12345;
	int mask = 10000;
	do {
		int d =x / mask;
		printf("%d", d);
		if ( x > 9 ) {
			printf(" ");
		}
		x %= mask;
		mask /= 10;
	}while ( x>0 );
	
	system("pause");
	return 0;
}