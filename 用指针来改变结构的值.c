#include <stdio.h>
struct point{
	int x;
	int y;
};
struct point* getStruct(struct point *p);
void output(struct point p);
void print(const struct point *p);

int main()
{
	struct point y = {0,0};
	getStruct(&y);
	output(y);
	output(*getStruct(&y));
	print(getStruct(&y));
	*getStruct(&y) = (struct point){3,4};
	printf("%d %d", getStruct(&y)->x, getStruct(&y)->y);//�������������Ǹ�ֵ��Ϊ
	//getstruct�����ٴθ�ֵ
	
	system("pause");
	return 0;
}
struct point* getStruct(struct point *p)
{
	// scanf("%d", &p->x);
	// scanf("%d", &p->y);
	p->x = 1;
	p->y = 2;
	printf("%d %d\n", p->x, p->y);
	return p;//����ָ����Ϊ��֮�����ʹ��
}

void output(struct point p)
{
	printf("%d %d\n", p.x, p.y);
}

void print(const struct point *p)
{
	printf("%d %d\n", p->x, p->y);
}