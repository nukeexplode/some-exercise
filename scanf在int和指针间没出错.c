#include <stdio.h>

int main(void)
{
	int i;
	scanf("%d", &i);//ȥ��&��intΪ4�ֽ�,&oΪ8�ֽ�Ϊʲôû�б���
	printf("%p", &i);
	g(&i);
	
	system("pause");
	return 0;
}
//*p��ʾȡ��p����ĵ�ַ�ı���
//&p��ʾȡ��p����ĵ�ַ
void g(int *i)
{
	printf("i=%p\n", i);//i�ں����б�����������е�i�ĵ�ַ&i�����i��ֵ!!!!!!
		if( i == *i ) {
		printf("%d", 1);
	}
	printf("*i=%d\n", *i);//*i����������������
}