#include <stdio.h>

int main()
{
	  int num;
	  scanf("%d", &num);
	  
	  while(num > 1) {
		  num--;
		  printf("%d\n", num);
	  }
	  printf("����\n");
	  
	  system("pause");
	  return 0;
}