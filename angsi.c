//platinum.c -- your weight in platinum
#include  <stdio.h>
int main(void)
{
	float weight;
	float value;
	
	printf("Are you worth your weight in platinum��\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds:");
	
	//��ȡ�û�������
	scanf("%f",&weight);
	//����׽�ļ۸���ÿ��˾��1700
	//14.5833���ڰ�Ӣ�����ⰻ˾ת��Ϊ��ⰻ˾
	value = 1700.0 * weight * 14.5833;
	printf("your weight in platinum is worth $%.5f.\n",value);
	printf("you are easily worth that! If platinum prices drop.\n");
	printf("eat more to maintain your value.\n");
	
	getchar();
	getchar(); 
	return 0;
}