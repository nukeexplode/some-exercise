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
			printf("������µĴ���\n");
		}else if ( a < guess ) {
			printf("������µ�С��\n");
		}
	} while ( guess != a );
	printf("��ϲ��¶���\n");
	
	return 0;
}