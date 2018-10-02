#include <stdio.h>
#define MSG "i am a symbolic string constant"
#define MAXLENGTH 81
int main()
{
	char words[MAXLENGTH] = "i am a symbolic string constant";
	const char * pt1 = "i am a symbolic string constant";
	puts("i am a symbolic string constant");
	puts(MSG);
	puts(words);//puts会在子符串后加\n
	puts(pt1);
	words[8] = "p";
	puts(words);
	
	system("pause");
	return 0;
}