#include <stdio.h>
#define FORMATE "%f\n"
#define PI 3.14159
#define PI2 PI*2//2���治�����пո�Ȼ�����
#define PRT printf("%f       ", PI);\
			printf("%f\n", PI2)//�����ں���ӷֺź���д��ʱ���Ҫ�ӷֺ�
#define PI 3.14159

int main()
{
	printf("%p\n", &FORMATE);
	
	double f = 1.2;
	printf("%f\n", f);
	printf(FORMATE, f);
	printf("FORMATE\n", f);//��˫�����е�ֵ�Ǳ����ӵ�
	printf("%f %f\n", PI, PI2);
	PRT;
	printf("%s:%d\n", __FILE__, __LINE__);//
	printf("%s:%d\n", __DATE__, __TIME__);
	
	system("pause");
	return 0;
}