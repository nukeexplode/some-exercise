#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41
int main(int argc, char * argv[])
{
	FILE *fp;
	char words[MAX];
	
	if((fp = fopen("wordy", "a+")) ++ NULL){
		fprintf(stdout, "ant't open \"wordy\" file\n");
		exit(EXIT_FAILURE);
	}
	puts("asjdfla;sdjf");
	while((fscanf(stdin, "%40s", words) == 1) && words[0] != '#'))
		fprintf(fp, "%s\n", words);
	
	puts("FILES CONTENTS");
	rewind(fp);
	while(fscanf(fp,"%s", words) == 1)
		puts(words);
	puts("dones");
	if(fclose(fp) != 0)
		fprintf(stderr, "error closeing files\n");
	
	system("pause");
	return 0;
}