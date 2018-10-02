#include <stdio.h>
int main()
{
	char word[8];
	char word2[8];
	
	scanf("%s", word);//如果输入12345678
	scanf("%s", word2);//如果输入12345678不安全会越界;可以在%中加个7表示只读7个数
	printf("%s", word);
	printf("%s\n",word2);
	printf("%s##%s##", word, word2);
	
	system("pause");
	return 0;
}