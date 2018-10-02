#include <stdio.h>
int main()
{
	int a[10];
	int i,j,temp;
	for( i=0; i<10; i++ ){
		a[i]=i;
	}
	for( i=0; i<10; i++){
		for(j=i; j<10; j++){
			if( a[i] > a[j] ){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for( i=0; i<10; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	int num;
	scanf("%d", &num);
	int mid,low,high;
	low = 0;
	high = (sizeof(a))/4 - 1;
	while( low<=high ){
		mid = (low+high)/2;
		if( a[mid] < num ){
			low = mid+1;
		}else if( a[mid]> num ){
			high = mid-1;
		}else{
			break;
		}
	}
	printf("%d", a[mid]);
	
	return 0;
}
