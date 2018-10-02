#include <stdio.h>
struct point{
	int x;
	int y;
};
struct  rectangle {
	struct point p1;
	struct point p2;
};

void printrect(struct rectangle r);

int main()
{
	int i;
	struct rectangle rects[] = {
		{{1,2}, {3,4}},
		{{5,6}, {7,8}}
	};//2rectangle
	for(i=0;i<2;i++) {
		printrect(rects[i]);
	}
	
	system("pause");
	return 0;
}

void printrect(struct rectangle r)
{
	printf("%d %d %d %d",  r.p1.x, r.p1.y, r.p2.x, r.p2.y);
}