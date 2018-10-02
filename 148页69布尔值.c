#include <stdio.h>
#include <stdbool.h>
int main()
{
	long num;
	long sum = 0L;
	int status;
	bool intput_is_good;
	
	intput_is_good = scanf("%ld", &num);
	while(intput_is_good) {
		sum += num;
		intput_is_good = scanf("%ld", &num);
	}
	printf("%ld", sum);
	printf("%d %d", true, false);
	
	system("pause");
	return 0;
}