#include <stdio.h>

int main()
{
	int n;
	int one, two, five,cnt;
	scanf("%d", &n);
	for ( one=0; one<=n*10; one++) {
		for ( two=0; two<=n*10/2; two++ ) {
			for ( five=0; five<=n*10/5; five++ ) {
				//printf("%d %d %d\n", one, two, five);
				if ( one + two*2 + five*5 == n*10 ) {
					//printf("������%d��1�Ǽ�%d�����Ǽ�%d����ǵõ�2Ԫ\n", one, two, five);
					cnt++;
				}
			}
		}
	}
	printf("%d", cnt);
	system("pause");
	return 0;
}
