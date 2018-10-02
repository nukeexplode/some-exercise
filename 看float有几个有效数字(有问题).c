#include <stdio.h>
int main(void)
{
	float a = 1234123.567899;//float只能保证七位有效数字
	
	printf("%f %e", a, a);
	
	system("pause");
	return 0; 
}