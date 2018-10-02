#include <stdio.h>
#include <string.h>

int f(int a, int b, int c, int d,int e);
int main()
{
	char ab[25];
	char maxname[25];
	int a,b,e, persum = 0, sum = 0;
	char c,d;
	int x, i;
	int max = 0;
	scanf("%d", &x);
	for( i=0; i<x; i++ ) {
		scanf("%s %d %d %c %c %d", ab, &a, &b, &c, &d, &e);
		persum = f(a,b,c,d,e);
		sum += persum;

		if( max<persum ) {
			strcpy( maxname, ab);
			max = persum;
		}
	}
	printf("%s\n%d\n", maxname, max);
	printf("%d", sum);
	
	system("pause");
	return 0;
}

int f(int a, int b, int c, int d,int e)
{
	int sum = 0;
	if( a>80 && e>=1 ) sum += 8000;
	if( a>85 && b>80 ) sum += 4000;
	if( a>90 ) sum += 2000;
	if( a>85 && d == 'Y' ) sum += 1000;
	if( b>80 && c == 'Y' ) sum += 850;
	
	return sum;
}