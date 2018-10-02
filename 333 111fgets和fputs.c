#include <stdio.h>
#define MSG "i am a symbolic string constant"
#define MAXLENGTH 81
int main()
{
	char a[1000000];
	
	while(fgets( a, 10, stdin ) != NULL && a[0] != '\n'){
		fputs(a, stdout);//用EOF也可以
	}
	puts("done");
	
	system("pause");
	return 0;
}