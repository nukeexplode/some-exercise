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
			putchar('\n');//putchar()ֻ��ascll��
		}
		ch = getchar();
	}
	putchar(ch);//��ӡ���з�
	
	system("pause");
	return 0;
}