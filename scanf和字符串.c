#include <stdio.h>
int main()
{
	char word[8];
	char word2[8];
	
	scanf("%s", word);//�������12345678
	scanf("%s", word2);//�������12345678����ȫ��Խ��;������%�мӸ�7��ʾֻ��7����
	printf("%s", word);
	printf("%s\n",word2);
	printf("%s##%s##", word, word2);
	
	system("pause");
	return 0;
}