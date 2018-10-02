#include <stdio.h>
int main(void)
{
	char ch;
	
	printf("Please enter a character.\n");
	scanf("%c",&ch);
	printf("the code for %c is %d.\n",ch,ch);
	
	system("pause");
	return 0;
}