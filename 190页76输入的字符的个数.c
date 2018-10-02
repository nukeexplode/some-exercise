#include <stdio.h>
#define PERIOD '.'
int main()
{
	char ch;
	int charcount = 0;
	
	while((ch = getchar()) != PERIOD) {
		if (ch != '"' && ch != '\''){
			charcount++;
		}
	}
	printf("%d", charcount);
	
	system("pause");
	return 0;
}