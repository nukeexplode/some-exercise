#include <stdio.h>

int main()
{
	int hour1,minute1;
	int hour2,minute2;
	
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	
	int time1=hour1*60+minute1;
	int time2=hour2*60+minute2;
	
	int t=time1-time2;
	
	printf("��ȥ��%dСʱ%d����",t/60,t%60);

	system("pause");

	return 0;
}