#include <stdio.h>
int main()
{
	int cnt = 0, x, i;
	float sum=0.0;
	int number[100];
	scanf("%d", &x);
	while( x!=-1 ){
		sum += x;
		number[cnt] = x; 
		//
		{
			int i;
			printf("%d\t", cnt);	
			for( i=0; i<=cnt; i++ ) {
				printf("%d\t", number[i]);
			}
			printf("\n");
		}
		//
		cnt++;
		scanf("%d", &x);
		}
		if( cnt>0 ){
			printf("%f\n", sum/cnt);
			int i;
			for( i=0; i<cnt; i++ ) {
				if( number[i] > sum/cnt ) {
					printf("%d", number[i]);
				}
			}	
		}

	system("pause");
	return 0;
}