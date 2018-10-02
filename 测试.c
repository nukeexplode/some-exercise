#include <stdio.h>
int main(void)
{
char a[100];
scanf("%s",a);
int num = 0,ab = 0;

int i = 0;

while(a[i]!=0)
{
if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))

ab++;
else if(a[i]>='0'&&a[i]<='9')
num++;

}

printf("×ÖÄ¸: %d,Êý×Ö %d\n",ab,num);

return 0;

} 