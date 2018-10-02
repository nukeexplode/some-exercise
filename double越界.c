#include <stdio.h>
int main(void)
{	
	printf("%f", 12.0/0.0);
	printf("%f", -12.0/0.0);
	printf("%f", 0.0/0.0);
	
	system("pause");
	return 0; 
}