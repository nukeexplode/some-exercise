#include <stdio.h>
#define MSG "i am a symbolic string constant"
#define MAXLENGTH 81
int main()
{
	char words[10];
	int i;
	
	while( fgets(words, 10,stdin) != NULL && words[0] != '\n'){
		i = 0;
		while(words[i] != '\n' && words[i] != '\0'){
			i++;
		}
		if(words[i] == '\n'){
			words[i] = '\0';
		}else{
			while(getchar() != '\n'){
				continue;
			}
		}
		puts(words);
	}
	
	system("pause");
	return 0;
}