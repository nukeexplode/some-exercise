#include <stdio.h>
int main()
{
	int x = 0;
	while( x<10 ) {
		if( x== 5 ) {
			break;
		}
		x++;
	}
	printf("%d", x);
	
	system("pause");
	return 0;
}