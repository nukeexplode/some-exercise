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
			printf("������µĴ���\n");
			scanf("%d\n", &guess);
		}else{
			printf("������µ�С��\n");
			scanf("%d\n", &guess);
		}
	}
	printf("��ϲ��¶���\n");
	if( count > 10 ) {
		printf("����,���Ȼ����%d��",count);
	}else {
		printf("�������ϸ����%d", count);
	}
	system("pause");
	return 0;
}
