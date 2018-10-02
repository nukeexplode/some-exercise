#include <stdio.h>

int main()
{
	int num,bit = 0;
	
	scanf("%d",&num);
	bit++;
	num /= 10;
	while ( num> 0 ){
		bit++;
		num /= 10;
	}
	printf("%d\n",bit);
	return 0;

}
