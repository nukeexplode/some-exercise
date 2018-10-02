#include <stdio.h>
#define SPACE ' '
int main()
{
	char ch;
	ch = getchar();
	while(ch != '\n')
	{
		if(ch == SPACE){
			putchar(ch);
			putchar('\n');
		}else{
			putchar(ch + 1);
			putchar('\n');//putchar()Ö»¶ÁascllÂë
		}
		ch = getchar();
	}
	putchar(ch);//´òÓ¡»»ÐÐ·û
	
	system("pause");
	return 0;
}