#include<stdio.h>
int main()
{
int a[10],i,j,t;
printf("������10������:\n");
for(i=0;i<10;i++)
  scanf("%d",&a[i]);
for(i=0;i<9;i++)
  for(j=0;j<9-i;j++)
 if(a[j]>a[j+1])
 {
 t=a[j]; a[j]=a[j+1]; a[j+1]=t;
 }
printf("�����Ժ����:\n");
for(i=0;i<10;i++)
  printf("%d ",a[i]);
printf("\n");
system("pause");
 return 0;
}