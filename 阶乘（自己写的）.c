#include <stdio.h>

int main()
{
	int n, ori, sum;
	
	scanf("%d", &n);
	ori = n;
	sum = n;
	while ( n != 1 ) {
		sum *= n-1;
		n--;
	}
	printf("%dµÄ½×³ËÊÇ%d", ori, sum);
	
	system("pause");
	return 0;
}