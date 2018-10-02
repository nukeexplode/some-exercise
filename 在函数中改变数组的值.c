#include <stdio.h>
int f(int ex[]);
int main()
{
	int a[] = {1,2,3,4};
	f(a);
	printf("%d %d\n", a[3], a[0]);
	system("pause");
	return 0;
}

int f(int ex[])
{
	ex[3] = 7;
	ex[0] = 10;//或*ex才可以
	ex = 10;//改变了ex的地址
	printf("%p\n", ex);

	return 0;
}