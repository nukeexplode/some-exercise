#include <stdio.h>
int main()
{
	int guess = 1;
	char response;
	
	while((response = getchar()) != 'y'){
		if (response == 'n'){
			printf("well,then,is it %d?", ++guess);
		}else{
			printf("sorry,i only know y or n");
		}
		while(getchar() != '\n'){ 
			continue;
		}
	}
	
	system("pause");  
	return 0;
}