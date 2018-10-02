#include <stdio.h>

int main()
{
	int age;
	
	printf("请输入你的年龄");
	scanf("%d",&age);
	
	if ( age <=18 ){
		printf("年轻人世界是你们的");
	}else{
		printf("老年人\n");
	}
	
	system("pause");
	return 0;
}