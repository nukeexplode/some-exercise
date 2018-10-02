#include <stdio.h>

int main()
{
	int beg, end;
	double n=0, sum=0;
	
	scanf("%d %d", &beg, &end);
	for ( n=beg; n<=end; n++ ) {
		sum += 1/n;
	}
	printf("%f", sum);
	system("pause");
	return 0;
}

