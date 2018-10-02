#include <stdio.h>

int main()
{
	int t = 1, x;
	scanf("%d", &x);
	
	// 12345/10000->1
	// 12345%10000->2345
	// 10000/10->1000
	// 2345/1000->2
	// 2345%1000->345
	// 1000/10->100
	// 345/100->3
	// 345%100->45
	// 100/10->10
	// 45/10->4
	// 45%10->5
	// 10/10->1
	// 5/1->5
	// 5%1->0
	// 1/10->0
	int backup;
	backup = x;
	while ( backup > 9 ) {
		backup /= 10;
		t *= 10;
	}
	//printf("%d", t);
	int digit;
	while  ( t > 0 ) {
		digit = x/t;
		x %= t; 
		printf("%d", digit);
		
		t /= 10;
	}
	
	system("pause");
	return 0;
}