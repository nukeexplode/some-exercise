#include <stdio.h>
#include "diceroll.h"


//������������Ķ���
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

static int rollem(int sides)//ÿ������ҡ�����Ľ������¼ҡ�˼���
{
	int roll;
	
	roll = rand1() % sides + 1;
	roll_count++;
	
	return roll;
}

int roll_n_dice(int dice, int sides)//��������
{
	int d;
	int total=0;
	for(d=0; d<dice; d++)
		total += rollem(sides);
	
	return total;
}



