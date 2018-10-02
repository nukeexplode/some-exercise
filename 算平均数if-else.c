#include <stdio.h>

int main()
{
	int num, count = 0, sum = 0;
	
	do{
		scanf("%d", &num);
		if( num != -1 ) {
			sum += num;
			count++;
		}
	}while ( num != -1 );
	printf("平均数是%d", sum/count);
					
	system("pause");
	return 0;
}