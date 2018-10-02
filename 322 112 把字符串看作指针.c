#include <stdio.h>
#define MSG "i am a symbolic string constant"
#define MAXLENGTH 81
int main()
{
	printf("%s, %#p, %c", "we", "are", *"space");
	
	system("pause");
	return 0;
}