#include <stdio.h>
int main()
{
	 int ch;
	 
	 while ( (ch = getchar()) != EOF )  {
		 putchar(ch);
	 }
	 
	 printf("EOF");
	
	system("pause");
	return 0;
}