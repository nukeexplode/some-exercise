#include <stdio.h>
int main()
{
	int total,cost;
	
	printf("收到的钱:");
	scanf("%d",&total);
	printf("花费的钱:");
	scanf("%d",&cost);
	
	printf("找零:%d",total - cost);
	
	system("pause");
	return 0;
}
	