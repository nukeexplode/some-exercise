#include <stdio.h>

void f(int *p);
void k(int k);
int main(void)
{
	int p=6;
	printf("&p=%p\n", &p);
	f(&p);//��ַ���Ը�ָ��,ָ�벻���Ը���ַ{f(*p)}
	//��ַ������,ָ�벻�ܸ�����
	g(p);
	
	system("pause");
	return 0;
}

void f(int *p)
{
	printf("p=%p\n", p);
	printf("*p=%d\n", *p);
	*p = 26;
}

void g(int k)
{
	printf("k=%d\n", k);
	printf("&k=%p", &k);
}