#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
void draw(void);
int main()
{
	
	draw();
	
	system("pause");
	return 0;
}

void draw(void)
{
	int i,j;
	for( i=0; i<3; i++) {
		printf("-");
	}
}