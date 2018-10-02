#include <stdio.h>
#include <time.h>
int main()
{
	int i, j;
	int a[123];
	i = scanf("%s", a);
	j = printf("123%d\n", i);
	printf("%d\n", j);
	int k;
	k = scanf("%d %d", &i, &j);//k会等于二		
	printf("%d", k);
	
	system("pause");
	return 0;
}