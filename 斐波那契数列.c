#include <stdio.h>
int main()
{
	int x, y, z, count;	
	
	x=y=1;
	printf("%d\n%d\n", x, y);
	for( count=0; count<18; count++ ) {
		z = y;
		y += x;
		x = z;
		printf("%d\n", y);
	}
		 
	system("pause");
	return 0;
}