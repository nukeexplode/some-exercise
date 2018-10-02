#include <stdio.h>
int main()
{
	int a[4][4]={5,2,3,4,
				6,6,7,3,
				7,9,6,5};
	int i,j,k,rmax=0;
	for( i=0; i<4; i++ ){
		int max=a[i][0]; 
		for( j=0; j<4; j++){
			if( a[i][j] > a[i][0] ) {
				max = a[i][j];
				rmax = j;
			}
		}
		for( k=0; k<4; k++ ){
			if(a[i][rmax]<a[k][rmax]){
				rmax = -1;
				break;
			}
		}
		if( rmax != -1 ){
			printf("%d %d %d\n",rmax,i,a[rmax][i]);
		}
	}
	
	return 0;
}
