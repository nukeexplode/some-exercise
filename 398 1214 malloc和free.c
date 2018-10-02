#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double * ptd;
	int max;
	int number;
	int i=0;
	
	if(scanf("%d", &max !=1)){
		printf("no");
		exit(EXIT_FAILURE);
	}
	ptd = (double *) malloc(max * sizeof(double));
	if(ptd == NULL){
		printf("1no");
		exit(EXIT_FAILURE);
	}
	puts("asf");
	while(i<max && scanf("lf", &ptd[i])==1){
		++i;
	}
	number = i;
	for(i=0; i<number; i++){
		printf("%7.2f", ptd[i]);
		if( i % 7 != 0 ) putchar('\n');
	}
	if(i % 7 != 0) putchar('\n');
	puts("done");
	free(ptd);
	
	system("pause");
	return 0;
}