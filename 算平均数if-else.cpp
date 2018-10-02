#include <stdio.h>

int main()
{
	int num = 12, count = 0, sum = 0;
	
	scanf("%d", &num);
	if( num != -1 ) {
		sum += num;
		count++;
		scanf("%d", &num);
	}else {
		printf("%d", num/count);
	}

	return 0;
}
