#include <stdio.h>
#define FORMATE "%f\n"
#define PI 3.14159
#define PI2 PI*2//2后面不可以有空格不然会出错
#define PRT printf("%f       ", PI);\
			printf("%f\n", PI2)//不能在后面加分号后面写的时候就要加分号
#define PI 3.14159

int main()
{
	printf("%p\n", &FORMATE);
	
	double f = 1.2;
	printf("%f\n", f);
	printf(FORMATE, f);
	printf("FORMATE\n", f);//在双引号中的值是被无视的
	printf("%f %f\n", PI, PI2);
	PRT;
	printf("%s:%d\n", __FILE__, __LINE__);//
	printf("%s:%d\n", __DATE__, __TIME__);
	
	system("pause");
	return 0;
}