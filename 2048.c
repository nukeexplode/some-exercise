#include "windows.h"
#include "stdio.h"
#include "time.h"
#include "stdlib.h"void gameshow();
void number();
void left();
void right();
void up();
void down();
int default_judge();//ʧ���ж�
void back_up();//���汸��
void undo();//����
int array[4][4] = { 0 },back_1[4][4]={0},back_2[4][4]={0};
int array_creature = 1;
int main()
{
char diricter;
number();
array_creature = 1;
srand((unsigned)time(NULL));
while(1)
{
number();
system("cls");
gameshow();
back_up();
if((diricter=getch())<0) diricter=getch();
switch(diricter)
{
case 72:up();break;
case 75:left();break;
case 80:down();break;
case 77:right();break;
case 'q':undo(); }
if(default_judge()==0)
{
break;
}



} return 0;
}
void gameshow()//�����ӡ
{
int i,j;
printf(" 2048��Ϸ\n�������Ҽ�����\n q������\n\n\n");
printf("|-----|-----|-----|-----|\n");
for (i = 0; i < 4; i++)
{
printf("|");
for (j = 0; j < 4; j++)
{
if (array[i][j] == 0)
{
printf(" |"); 
}
else
{
printf("%3d |", array[i][j]);
}
} printf("\n|-----|-----|-----|-----|\n");
}
}void number()//������
{
int i, j;
srand((unsigned)time(NULL));
while (array_creature)
{
i = rand() % 4;
j = rand() % 4; 
if (array[i][j] == 0)//��Ϊ0�ĵط���������
{
array[i][j] = 2;
array_creature = 0;//������������
}
}
}
void left()//���
{
int i,a=2;
for (i = 0;i < 4;i++)
{
int j=0,k,l,m;
for(k=0;k<4;k++)//�����ƶ�
{
if(array[i][k]!=0)
{
array[i][j++]=array[i][k];
} }
for(l=j;l<4;l++)//����������
{
array[i][l]=0;
}
for(m=0;m<3;m++)//�ϲ���ͬ����
{
if(array[i][m]==array[i][m+1])
{
array[i][m]<<=1;
array[i][m+1]=0;

}
}
for(k=0,j=0;k<4;k++)//���������
{
if(array[i][k]!=0)
{
array[i][j++]=array[i][k];
}
}
for(l=j;l<4;l++)
{
array[i][l]=0;
}


}
array_creature = 1;
}
void right()
{
int i;
for (i = 0;i < 4;i++)
{
int j=3,k,l,m;
for(k=3;k>=0;k--)
{
if(array[i][k]!=0)
{
array[i][j--]=array[i][k];
} }
for(l=j;l>=0;l--)
{
array[i][l]=0;
}
for(m=3;m>0;m--)
{
if(array[i][m]==array[i][m-1])
{
array[i][m]<<=1;
array[i][m-1]=0;

}
}
for(k=3,j=3;k>=0;k--)
{
if(array[i][k]!=0)
{
array[i][j--]=array[i][k];
} }
for(l=j;l>=0;l--)
{
array[i][l]=0;
}
}
array_creature = 1;}
void up()
{
int i;
for (i = 0;i < 4;i++)
{
int j=0,k,l,m;
for(k=0;k<4;k++)
{
if(array[k][i]!=0)
{
array[j++][i]=array[k][i];
}

}
for(l=j;l<4;l++)
{
array[l][i]=0;
}
for(m=0;m<3;m++)
{
if(array[m][i]==array[m+1][i])
{
array[m][i]<<=1;
array[m+1][i]=0;
}
}
for(k=0,j=0;k<4;k++)
{
if(array[k][i]!=0)
{
array[j++][i]=array[k][i];
}

}
for(l=j;l<4;l++)
{
array[l][i]=0;
}
}
array_creature = 1;
}
void down()
{
int i;
for (i = 0;i < 4;i++)
{
int j=3,k,l,m;
for(k=3;k>=0;k--)
{
if(array[k][i]!=0)
{
array[j--][i]=array[k][i];
}

}
for(l=j;l>=0;l--)
{
array[l][i]=0;
}
for(m=3;m>0;m--)
{
if(array[m][i]==array[m-1][i])
{
array[m][i]<<=1;
array[m-1][i]=0;
}
}
for(k=3,j=3;k>=0;k--)
{
if(array[k][i]!=0)
{
array[j--][i]=array[k][i];
}

}
for(l=j;l>=0;l--)
{
array[l][i]=0;
}
}
array_creature = 1;
}
int default_judge()//ʧ���ж�
{
int i,j,a=0;
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
if(array[i][j]==0)
{
a=1;
} }
return a;
}
void back_up()//���汸��
{
int i,j;
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
back_2[i][j]=back_1[i][j];
back_1[i][j]=array[i][j];
}

}
}
void undo()//����
{ int i,j;
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
array[i][j]=back_2[i][j];
}

}
}