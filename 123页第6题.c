#include <stdio.h>
int main()
{
	int x, y, count;	

	count = 0;
	for( x=0; x<26; x++ ) {
		for( y=0; y<=count; y++ ) {
			printf("%c", 'A'+y);
		}
		printf("\n");
		count++;
	}
	
	system("pause");
	return 0;
}