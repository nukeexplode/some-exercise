#include <stdio.h>
int main()
{
	char s[] = "hello";
	// char *p = strchr(s, 'l');
	// printf("%s\n", p);���llo,����p�ĵ�ַ����˵�һ��l�ĵ�ַ
	// char *p = //strchr(p+1, 'l')//;
	// printf("%s\n", p);����ԭ��ָ��ָ���ַ����
	// char *p = strchr(s, 'l');
	// p = strchr(p+1, 'l');
	// printf("%s\n", p);strchr���lo
	int *k = s;
	char *p = strchr(s, 'l');
	p = strchr(p+1, 'l');
	*p = '\0';
	printf("%s\n", k);//���ǰ����ַ�
	
	system("pause");
	return 0;
}