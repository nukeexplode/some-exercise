#include <stdio.h>
int main()
{
	// freopen("Table.in","r",stdin);
	// freopen("Table.out","w",stdout);
	int i = 0,c = 0,d = 0,x = 0,y = 0,cnt;
	char F[100001],a;
	scanf("%c",&a);
	while(a != 'E'){
		F[i] = a;
		if(a == 'W') c++;
		else if(a == 'L') d++;
		if((c >= 11&&c-d >= 2)||(d >= 11&&d-c >= 2)){
			printf("%d:%d\n",c,d);
			c = 0,d = 0;
		}
		i++;
		scanf("%c",&a);
	} 
	printf("%d:%d\n\n",c,d);
	for(cnt = 0; cnt < i; cnt++){
		if(F[cnt] == 'W') x++;
		else if(F[cnt] == 'L') y++;
		if((x >= 21&&x-y >= 2)||(y >= 21&&y-x >= 2)){
			printf("%d:%d\n",x,y);
			x = 0,y = 0;
		}
	}
	printf("%d:%d\n\n",x,y);
	
	system("pause");
	return 0;
}