#include<stdio.h>
void main()
{
    double price,money=0;
    int num;
    printf("请输入方便面的价格和购买的数量：");
    scanf("%lf%d",&price,&num);
    money+=price*num;
    printf("请输入作业本的价格和购买的数量：");
    scanf("%lf%d",&price,&num);
    money+=price*num;
    printf("请输入圆珠笔的价格和购买的数量：");
    scanf("%lf%d",&price,&num);
    money+=price*num;
    printf("应付金额：%.2lf\n",money);
    printf("实收金额：");
    {
        double money1;
        scanf("%lf",&money1);
         
        printf("找零：%.2lf\n", money1-money );
    }
}

//本回答由提问者推荐