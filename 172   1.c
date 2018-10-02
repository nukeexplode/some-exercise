#include <stdio.h>
int x=1,y=1;
int cnt=0;
void a();
int main()
{
	int i;
	printf("%d %d ", x,y);
	a();
	
	system("pause");
	return 0;
}

void a()
{
	int z;
	while(cnt!=18){
		printf("%d ", x+y);
		z=y;
		y += x;
		x=z;
		cnt++;
		a();
	}
}