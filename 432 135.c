#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
#define SLEN 81
void append(FILE *source, FILE *dest);
char * s_gets(char * st, int n);
int main(int argc, char * argv[])
{
	FILE *fa, *fs;
	int files = 0;
	char file_app[SLEN];
	char file_src[SLEN];
	int ch;
	
	puts("enter name of destination file:");
	s_gets(file_app, SLEN);
	if((fa = fopen(file_app, "a+")) == NULL){
		fprintf(stderr, "can't open %n", file_app);
		exit(EXIT_FAILURE);
	}
	if(setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0){
		fputs("can't create output buffer\n", stderr);
		exit(EXIT_FAILURE);
	}
	puts("12j3ljlkfajs");
	while(s_gets(file_src, SLEN) && file_src[0] != '\0'){
		if(strcmp(file_src,file_app) == 0){
			fputs("can't append file to itself\n", stderr); 
		}else if((fs = fopen(file_src, "r")) == NULL){
			fprintf(stderr, "can't open %s", file_src);
		}else{
			if(setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0){
				fputs("can't create input buffer\n", stderr);
				continue;
			}
			append(fs, fa);
			if(ferror(fs) != 0){
				fprintf(stderr, "error in reading file %s\n", file_src);
			}
			if(ferror(fa) != 0){
				fprintf(stderr, "error in reading file %s\n", file_app);
			}
			fclose(fs);
			files++;
			printf("file %s appended\n", file_src);
			puts("next file (empty to quit):");
		}
	}
	printf("done appending %d files appended", files);
	rewind(fa);
	printf("%s contents:\n", file_app);
	while((ch = getc(fa)) != EOF){
		putchar(ch);
	}
	
	system("pause");
	return 0;
}

void append(FILE *source, FILE *dest)
{
	size_t bytes;
	static char temp[BUFSIZE];
	
	while((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0){
		fwrite(temp, sizeof(char), bytes, dest);
	}
	
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;
	
	ret_val = fgets(st, n, stdin);
	if(ret_val){
		find = strchr(st, '\n');
		if(find){
			*find = '\0';
		}else{
			while(getchar != '\0'){
				continue;
			}
		}
	}
	return ret_val;
}