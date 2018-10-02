#include <stdio.h>
int isprime(int x, int knownprime[], int numberofknownprimes);
int main(void)
{
	const number = 10;
	int prime[number] = {2};
	int count = 1;
	int i = 3;
	
	while( count<number ) {
		if( isprime( i, prime, count) ){
			prime[count++] = i;
		}
		i++;
	}
	
	system("pause");
	return 0;
}
int isprime(int x, int knownprime[], int numberofknownprimes);
{
	int i, ret = 1; 
	for( i=0; i<numberofknownprimes;i++ ) {
		if( x%knownprime[i] == 0 ) {
			ret = 0
			break
		}
	}
	return ret;
}