#include <stdio.h>
int main()
{
	int *p; 
	int a[]={100, 200,300};
	
	p=a;
	printf("%d %p %p\n", *p, p, &p);
	p+=1;
	printf("%d %p %p", *p, p, &p);
	
	system("pause");
	return 0;
}