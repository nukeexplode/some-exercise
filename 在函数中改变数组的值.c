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
	ex[0] = 10;//��*ex�ſ���
	ex = 10;//�ı���ex�ĵ�ַ
	printf("%p\n", ex);

	return 0;
}