#include<stdio.h>
#include<stdlib.h> //��������ɺ���srand()��rand() �����ͷ�ļ�
#include<time.h>  //time()�����ͷ�ļ�
int main()
{
 int sysdata = 88;//ϵͳ���ɵ�����
 int n; //���µ�����
 int sum = 0;//��¼�µĴ���
 //srand((unsigned)time(NULL)); //�������������ʼ����������ʱ��Ϊ����
 //sysdata =  rand()%100+1; //�������1��100�������
 printf("�˳������밴:ctrl + c!\n");
 while(2)
 {
  printf("��������µ�����(1-100): ");
  if(scanf("%d",&n) != 1) //�����ж��û��Ƿ������Ϸ
  {
   break;  //����whileѭ����������Ϸ 
  }
  sum++; //ÿ����һ�����ݣ��µĴ�����1
  if(sum == 10) // ���µĴ�������10�ε�ʱ�����������µ������
  {
   if(n == sysdata) //���һ�β�����ȷ,������,������Ϸ
   {
    printf("������ȷ���ܹ�����%d��!\n",sum);
    break; //����whileѭ����������Ϸ
   }
   else //���һ�β�������ȷ�����¿�ʼ��Ϸ
   {
    printf("������������%d�Σ����¿�ʼ��Ϸ!\n",sum);
    sysdata =  rand()%100+1; //�������1��100�������
    sum = 0;
   }
  }
  else
  {
   if(n == sysdata)
   {
    printf("������ȷ���ܹ�����%d��!\n",sum);//������ȷ��������Ϸ
    break;  //����whileѭ����������Ϸ
   }
   else if(n > sysdata)
   {
    printf("��µ�����̫��!\n");
   }
   else
   {
    printf("��µ�����̫С!\n");
   }
  }
 }
 printf("������Ϸ����!\n");
 
 system("pause");
 return 0;
}