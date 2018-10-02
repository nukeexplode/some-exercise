#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time (0));
	int a = rand();
	int guess;
	int count;
	
	a = a % 100 + 1;
	do {
		count++;
		scanf("%d\n", &guess);
		if ( guess > a) {
			printf("不好你猜的大了\n");
		}else if ( a < guess ) {
			printf("不好你猜的小了\n");
		}
	} while ( guess != a );
	printf("恭喜你猜对了\n");
	
	return 0;
}