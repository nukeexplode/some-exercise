#include <stdio.h>
int main()
{
	int div, num;
	num = 145;
	for(div = 2; (div*div) <= num; div++){
		printf("%d", div);
		if(num%div == 0) {
			if(div*div != num){
				printf("asdf");
			}else{
				printf("sb");
			}
		}
	}
	printf("%d", div);
	
	system("pause");
	return 0;
}