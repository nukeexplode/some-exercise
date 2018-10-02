#include <stdio.h>
int main()
{
	int oxen[5];
	int a[2][5];
	
	oxen[4] = {5,3,2,8};
	*a = {5,3,2,8};
	
	int i,j;
	
	for( i=0; i<2; i++ ) {
		printf("%d", a[i]);
	}
	
	for( i=0; i<2; i++ ) {
		for( i=0; i<2; i++ ) {
			printf("%d", a[i][j]);
		}	
	}
	
	system("pause");
	return 0;
}