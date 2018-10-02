#include<stdio.h>
int main()
{ 
	int n,i,j,sum=0,c[20100],a[110];
	scanf("%d",&n);
	memset(c,sizeof(c),0);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
	c[a[i]+a[j]]=1;
	for(i=0;i<n;i++) if(c[a[i]]==1) sum++;
	printf("%d\n",sum);
	
	system("pause");
	return 0;
}