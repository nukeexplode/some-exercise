#include <stdio.h>
#include <ctype.h>
int main()
{
	char ch;
	
	while((ch = getchar()) != '#'){
		if('\n' == ch) continue;
		if(islower(ch)){
			switch (ch){
				case 'a':printf("arg");break;
				case 'b':printf("brg");break;
				case 'c':printf("crg");break;
				case 'd':printf("drg");break;
				default:printf("fail");break;
			}
		}else{
			printf("only lowercase");
		}
		while(getchar() != '\n') {//从键盘缓冲区一直读取直到读到换行符
			continue;
		}
		printf("please");
	}
	printf("bye");
	
	system("pause");
	return 0;
} 