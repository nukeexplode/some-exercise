#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'
int main()
{
	char c;
	char prev;
	long n_char = 0;//字符数
	int n_word = 0;//单词数
	int n_line = 0;//行数
	bool word = false;
	
	prev = '\n';
	while((c = getchar()) != STOP){
		if(!isspace(c)) n_char++;
		if(c == '\n' ) {
			n_line++;
		}
		if(!isspace(c) && word == 0){
			n_word++;
			word = 1;
		}
		if( isspace(c) && word ) {
			word = 0;
		}
	}
	
	printf("%d %d %d", n_char, n_word, n_line);
	
	system("pause");
	return 0;
} 