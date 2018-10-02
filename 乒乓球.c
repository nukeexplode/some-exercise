#include <stdio.h>
int twe(char * a);
int ele(char * a);
int main()
{
	char a[100000];
	int i;
	
	scanf("%s", a);
	
	twe(a);
	printf("\n");
	ele(a);

	system("pause");
	return 0;
}

int twe(char * a)
{
	int w_cnt = 0, l_cnt = 0;
	int i = 0;
	for( i=0; ; i++ ) {
		if( (w_cnt>20 && w_cnt - l_cnt>=2) || (l_cnt>20 && l_cnt - w_cnt>=2)) {
			printf("%d:%d\n", w_cnt, l_cnt);
			w_cnt = 0;
			l_cnt = 0;
		}
		if( a[i]=='W' ) {
			w_cnt++;
		}
		if( a[i] == 'L' ) {
			l_cnt++;
		}
		if( a[i] == 'E' ){
			printf("%d:%d\n", w_cnt, l_cnt);
			break;
		}
	}
}

int ele(char * a)
{
	int w_cnt = 0, l_cnt = 0;
	int i = 0;
	for( i=0; ; i++ ) {
		if( (w_cnt>10 && w_cnt - l_cnt>=2) || (l_cnt>10 && l_cnt - w_cnt>=2)) {
			printf("%d:%d\n", w_cnt, l_cnt);
			w_cnt = 0;
			l_cnt = 0;
		} 
		if( a[i] == 'W' ) {
			w_cnt++;
		}
		if( a[i] == 'L' ) {
			l_cnt++;
		}
		if( a[i] == 'E' ){
			printf("%d:%d\n", w_cnt, l_cnt);
			break;
		}
	}
}