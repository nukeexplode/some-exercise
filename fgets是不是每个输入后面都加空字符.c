#include <stdio.h>
#define MSG "i am a symbolic string constant"
#define MAXLENGTH 81
char * s_gets(char * st, int n);
int main()
{
	char words[10];
	int i;
	
	while( fgets(words, 10,stdin) != NULL && words[0] != '\n'){
		puts(words);
		printf("sizeof(words) = %d\n", sizeof(words));
	}
	printf("µ½s_getsº¯Êý\n");
	s_gets(words, 10);
	puts(words);
	
	system("pause"); 
	return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	int i = 0;
	
	ret_val = fgets( st, n, stdin );
	if( ret_val ){
		while( st[i] != '\0' && st[i] != '\n') {
			i++;
		}
		if(st[i] == '\n'){
			st[i] = '\0';
		}else{
			while(getchar() != '\n'){
				continue;
			}
		}
	}
	
	return ret_val;
}

char * ss_gets(char * st, int n)
{
	char * ret_val;
	
	ret_val = fgets( st, n, stdin );
	if( ret_val ){
		while( *st != '\0' && *st != '\n' ) {
			st++;
		}
		if(*st == '\n'){
			*st = '\0';
		}else{
			while(getchar() != '\n'){
				continue;
			}
		}
	}
	
	return ret_val;
}

char * sss_gets(char * st, int n)
{
	char * ret_val;
	int i = 0;
	
	ret_val = fgets( st, n, stdin );
	if( ret_val ){
		while( st[i] != '\0' && st[i] != '\n') {
			i++;
		}
		if(strchr(ret_val, '\n')){
			st[i] = '\0';
		}else{
			while(getchar() != '\n'){
				continue;
			}
		}
	}
	
	return ret_val; 
}

char * s_strchr(char * st, int n)
{
	char * ret_val, * p;
	
	ret_val = fgets( st, n, stdin );
	if( ret_val ){
		while( *st != ' ' && *st != '\0') {
			st++;
		}
		if( *st == '\0' ){
			return NULL;
		}else{
			return st;
			}
		}
	}
	