// int * const q = &i;qָ��ָ��i�ĵ�ַ�����ڸı�
// *q = 26  ok!!!!!
#include<stdio.h>
int main(void)
{
	int i;
	int *const q = &i;
	*q = 26;//�����޸�i��ֵ
	//���ǲ�����q++������
	printf("%p, %p, %d", &*q, &i, i);
	
	system("pause");
	return 0;
}