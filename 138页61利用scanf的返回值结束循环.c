#include <stdio.h>
int main()
{
	long num;
	long sum = 0L;
	int status;
	status = scanf("%ld", &num);//��q�Ƴ�
	while(status == 1 ) {
		sum += num;
		status = scanf("%ld", &num);
	}
	printf("%ld", sum);
	
	system("pause");
	return 0;
}