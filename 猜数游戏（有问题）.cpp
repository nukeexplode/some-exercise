#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time (0));
	int a = rand();
	int guess;
	int count;
	
	a = a % 100;
	scanf("%d", &guess);
	while ( guess != a ) {
		count++;
		if ( guess > a) {
			printf("不好你猜的大了\n");
			scanf("%d\n", &guess);
		}else{
			printf("不好你猜的小了\n");
			scanf("%d\n", &guess);
		}
	}
	printf("恭喜你猜对了\n");
	if( count > 10 ) {
		printf("辣鸡,你居然猜了%d次",count);
	}else {
		printf("厉害了老哥猜了%d", count);
	}
	system("pause");
	return 0;
}
