#include <stdio.h>
int main()
{
	int i=0;
	char *s = "hello world";     //�������ַ����ĵ�ַ��һ��������ָ�����ͬһ���ַ���
	// s[0] = 'b';                �������ַ����ĵ�ַ��һ��������ָ�����ͬһ���ַ���
	char *s2 = "hello world";    //�������ַ����ĵ�ַ��һ��������ָ�����ͬһ���ַ���
	//s��s2ָ��ĳ���Ĵ������ֻ����
	//���Ҫ�ı��ַ���Ҫ���ַ�����
	printf("s=%p\n", & i);
	printf("&s[0]=%p\n", &s[0]);
	printf("s=%p\n", s);
	printf("s2=%p\n", s2);
	printf("s[0] = %c", s[0]);
	
	system("pause");
	return 0;
}