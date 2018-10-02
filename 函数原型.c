#include <stdio.h>
#include "diceroll.h"


//以下随机函数的定义
static int next = 1;
static int rand1(void)
{
	next = next*1103515245 + 12345;
	
	return (unsigned int) (next/65535) % 32768;
}

void rand0(unsigned int seed)
{
	next = seed;
}

static int rollem(int sides)//每个骰子摇出来的结果并记录摇了几次
{
	int roll;
	
	roll = rand1() % sides + 1;
	roll_count++;
	
	return roll;
}

int roll_n_dice(int dice, int sides)//计算总数
{
	int d;
	int total=0;
	for(d=0; d<dice; d++)
		total += rollem(sides);
	
	return total;
}



