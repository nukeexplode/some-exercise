#include 
int gall = 12;

int f(void);
int main()
{
	f();
	f();
	f();
	
	system("pause");
	return 0;
}

int f(void)
{
	int k =0;
	static int all = 1;//ȥ��static
	printf("&gall = %p, all= %p\n", &gall, &all);//��̬���ر����ͱ��ر��������һ��
	printf("&k = %p\n", &k);A
	printf("%s %d\n", __func__, all);
	all +=2;
	printf("%s %d\n", __func__, all);
	return all;
}