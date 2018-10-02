#include <stdio.h>
char *mypointcpy(char* dst, const char *src );
char *mycpy(char* dst, const char *src );

int main()
{
	char s1[] = "abc";
	char s2[] = "abc";
	printf("%s\n", s1);
	printf("%s\n", mycpy(s1, s2));
	printf("%s\n", mypointcpy(s1, s2));
	printf("%lu\n", sizeof(mycpy(s1, s2)));
	printf("%lu\n", sizeof(mypointcpy(s1, s2)));//居然是八字节
	printf("%lu\n", sizeof(s1));
	printf("%lu\n", sizeof(s2));
	
	system("pause");/ 
	return 0;
}

char *mycpy(char* dst, const char *src ) 
{
	char idx;
	while( src[idx] != '\0' ) {                   //!= '\0'   '\0'就是零值
		dst[idx] = src[idx];
		idx++;
	}
	dst[idx] = '\0';
	
	return dst;
}

char *mypointcpy(char* dst, const char *src ) 
{
	char *ret = dst;
	while ( *dst++ = *src++ )            //这是改变了地址
		;
	*dst = '\0';
	
	return ret;
}