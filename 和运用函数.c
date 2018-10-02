#include <stdio.h>

int sum(int begin, int end)
{
	int sum, i=0;
	for( i=begin; i<=end;i++){
		sum += i;
	}
	printf("sum=%d",sum);
}

int main()
{
	 int a,b;
	 scanf("%d %d",&a, &b);
	 sum(a, b);
	 
	 system("pause");
	 return 0;
}