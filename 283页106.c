#include <stdio.h>
int main()
{
	const int size = 4;
	int value1 = 44;
	int arr[size];
	int value2 = 88;
	int i;
	
	for(i=  ; i<=size; i++ ) {
		arr[i] = 2 * i + 1; 
	}
	
	for(i= -1; i<=7; i++ ) {
		printf("%2d %2d\n", i, arr[i]);
	}
	printf("%d %d\n", value1, value2);
	printf("%p\n",&arr[-1]);
	printf("%p\n",&arr[4]);
	printf("%p\n",&value1);
	printf("%p\n",&value2);
	
	system("pause");
	return 0;
}