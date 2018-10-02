#include <stdio.h>

int main()
{
	int num, count = 0,sum = 0;
	
	scanf("%d", &num);
	while( num != -1 ){
		sum += num;
		count++;
		scanf("%d", &num);
	}
	printf("%d\n",sum/count);
	
	system("pause");
	return 0;
}