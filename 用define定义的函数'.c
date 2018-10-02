#include <stdio.h>
#define P1(x) (x*57.29578)
#define P2(x) (x)*57.29578//不能这样写

int main()
{
	printf("%f\n", P1(5+2));
	printf("%f\n", 180/P2(1));
	
	system("pause");
	return 0;
}