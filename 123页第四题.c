#include <stdio.h>
int main()
{
	int num_count, eng_count;	
	char ant;
	
	num_count = 0;
	eng_count = 0;
	scanf("%c", &ant);
	while(ant != '#'){
		if( ant>='0' && ant<='9' ) {
			num_count++;
		}else if( ant<='z' && ant>='a' ){
			eng_count++;
		}else if( ant>='A' && ant<='Z' ){
			eng_count++;
		}
		scanf("%c", &ant);
	}
		printf("%d %d", num_count, eng_count);
	
	system("pause");
	return 0;
}