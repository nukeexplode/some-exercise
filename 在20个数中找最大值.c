#include <stdio.h>
int main()
{
	int x, y, count;	
	
	count = 0;
	scanf("%d", &x);
	while( count<4 ) {
		scanf("%d", &y);
		if( x<y ) {
			x = y;
		}
		count++;
	}
	printf("%d", x);
	
	system("pause");
	return 0;
}