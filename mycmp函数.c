#include <stdio.h>
int mycmp( const char *s1, const char *s2 );
int main()
{
	char s1[] = "abc";
	char s2[] = "abc";
	printf("%d\n", mycmp(s1, s2));
	printf("%d\n", s1 == s2);//数组永远不相等
	
	system("pause");
	return 0;
}

int mycmp( const char *s1, const char *s2 ) {
	int idx = 0;
	while(1) {
		if( s1[idx]!=s2[idx] ) {
			break;
		}else if( s1[idx] == '\0' ) {
			break;
		}
		idx++;
	}
	
	return s1[idx] - s2[idx];
}