#include <stdio.h>
#include <time.h>
#include "diceroll.h"

int main()
{ 
	int dice, roll;
	int sides;
	int status;
	
	rand0((unsigned int) time(0));
	printf("��������Ҫ�����������,q to quit");
	while( scanf("%d", &sides)==1 ){
		printf("how much dice do you want");
		while( status = scanf("%d", &dice) != 1){
			if(status == EOF){
				printf("the end of file");
				break;
			}else{
				printf("please enter an integer ");
				if(getchar() != '\n' ){
					continue;
				}
				continue;
			}
		}//�ж������Ƿ���ȷ
		roll = roll_n_dice(dice,sides);
		printf("%d side\n%d side", sides, dice);
		printf("result=%d", roll);
	}
	printf("you use %d times", roll_count);
	
	
	return 0;
}
