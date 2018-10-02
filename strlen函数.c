#include <stdio.h>
int mylen( const char* s );
int main()
{
	char line[] =  "hello";
	printf("strlen=%lu\n", mylen(line));
	printf("sizeof=%lu\n", sizeof(line));
	
	system("pause");
	return 0;
}

int mylen( const char* s ) {
	int cnt = 0;
	
	while(s[cnt] != '\0'){
		cnt++;
	}
	
	return cnt;
}