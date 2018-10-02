#include <stdio.h>

int main()
{
	int x, sign=1;
	double n, sum=0;
	
	scanf("%d", &x);
	for ( n=1; n<=x; n++ ) {
		sum += sign*1.0/n;
		sign = -sign;
	}
	
	printf("%f", sum);//%f±ð¸ã´íÁË
	system("pause");
	return 0;
}