#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(NULL));
	int a[100], cnt[100]={0};
//	for(int i=0; i<100; i++ ){
//		printf("%d",cnt[i]);
//	}
	int j;
	for(j=0; j<10; j++){
		for(int i=0; i<100; i++){
			a[i] = rand()%100+1;
			//printf("%d", a[i]);
			cnt[a[i]-1]++;
		}	
	}
//	for(int i=0; i<100; i++ ){
//		printf("%d ",cnt[i]);
//	}
	for(int i=0; i<100; i++ ){
		printf("%d %lf\n", i+1, (double)cnt[i]/j);
	}
	return 0;
}
