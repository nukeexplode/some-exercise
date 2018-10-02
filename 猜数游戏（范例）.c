#include<stdio.h>
#include<stdlib.h> //随机数生成函数srand()与rand() 所需的头文件
#include<time.h>  //time()所需的头文件
int main()
{
 int sysdata = 88;//系统生成的数据
 int n; //所猜的数据
 int sum = 0;//记录猜的次数
 //srand((unsigned)time(NULL)); //随机数发生器初始化函数，以时间为种子
 //sysdata =  rand()%100+1; //随机生成1到100的随机数
 printf("退出程序请按:ctrl + c!\n");
 while(2)
 {
  printf("请输入你猜的数据(1-100): ");
  if(scanf("%d",&n) != 1) //用于判断用户是否结束游戏
  {
   break;  //跳出while循环，结束游戏 
  }
  sum++; //每输入一次数据，猜的次数加1
  if(sum == 10) // 当猜的次数大于10次的时候重新生成新的随机数
  {
   if(n == sysdata) //最后一次猜数正确,输出结果,结束游戏
   {
    printf("猜数正确，总共猜了%d次!\n",sum);
    break; //跳出while循环，结束游戏
   }
   else //最后一次猜数不正确则重新开始游戏
   {
    printf("猜数次数超过%d次，重新开始游戏!\n",sum);
    sysdata =  rand()%100+1; //随机生成1到100的随机数
    sum = 0;
   }
  }
  else
  {
   if(n == sysdata)
   {
    printf("猜数正确，总共猜了%d次!\n",sum);//猜数正确，结束游戏
    break;  //跳出while循环，结束游戏
   }
   else if(n > sysdata)
   {
    printf("你猜的数据太大!\n");
   }
   else
   {
    printf("你猜的数据太小!\n");
   }
  }
 }
 printf("猜数游戏结束!\n");
 
 system("pause");
 return 0;
}