#include<stdio.h>
void main()
{
    double price,money=0;
    int num;
    printf("�����뷽����ļ۸�͹����������");
    scanf("%lf%d",&price,&num);
    money+=price*num;
    printf("��������ҵ���ļ۸�͹����������");
    scanf("%lf%d",&price,&num);
    money+=price*num;
    printf("������Բ��ʵļ۸�͹����������");
    scanf("%lf%d",&price,&num);
    money+=price*num;
    printf("Ӧ����%.2lf\n",money);
    printf("ʵ�ս�");
    {
        double money1;
        scanf("%lf",&money1);
         
        printf("���㣺%.2lf\n", money1-money );
    }
}

//���ش����������Ƽ�