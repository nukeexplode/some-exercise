#include <stdio.h>
int main()
{
	const int conerage = 350;
	int sq_feet;
	int cans;
	
	while(scanf("%d", &sq_feet) == 1){
		cans = sq_feet / conerage;
		cans += ((sq_feet % conerage == 0)) ? 0 : 1;
		printf("%d %s", cans, cans == 1 ? "can" : "cans");
	}
	
	system("pause");
	return 0;
} 