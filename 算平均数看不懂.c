#include <stdio.h>

int main()
{
	int num;
	int sum = 0;
	int count = 0;
	while(scanf("%d", &num) && num != -1)//һֱ��������ֱ������-1������
	{
		sum += num;
		++count;
	}
	printf("%f", (double)sum / count);
	
	system("pause");
	return 0;
}