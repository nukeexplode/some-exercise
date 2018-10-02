 #include <stdio.h>
int main()
{
	int a = 0, b = 10;
	for( a=0,b=10;a>b;a++,b-- ) {
		printf("%d %d", a, b);
	}
	
	system("pause");
	return 0;
}