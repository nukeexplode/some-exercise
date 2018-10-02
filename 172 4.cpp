#include <stdio.h>
#include <math.h>
#include <string.h>
int tnum(char a[],int sys);
int numchange(int dnum, int nsys);
int main()
{
	int sys=16,dnum,nsys=2;
	char a[100] = "111";
	//printf("请输入进制");
	//scanf("%d", &sys); 
	dnum=tnum(a,sys);// 字符串转十进制数字 
	printf("%d\n",dnum);//测试 
	//printf("请输入想要转换的进制");
	//scanf("%d",&nsys);
	dnum = numchange(dnum,nsys);
	printf("%d",dnum);
	
	return 0;
}

int tnum(char a[],int sys)
{
	int i,sum=0,tmp=0;
	for( i=0; i<strlen(a)+1; i++ ){
		if( a[i]>='0' && a[i]<='9'){
			tmp = a[i]-'0';
			sum += pow( sys, strlen(a)-1-i );
		}
		else if( a[i]>='a'&&a[i]<='f'){
			tmp = a[i]-'a'+10;
			sum += pow( sys, strlen(a)-1-i );
		}
	}
	
	return sum;
} 

int numchange(int dnum, int nsys)
{
	int i=0,sum=0,tmp;
	while(dnum!=0){
		tmp = dnum % nsys;
		dnum /= nsys;
		if(tmp>=0&&tmp<=10){
			sum += tmp*pow(10,i);
			i++;
		}else{
			//实在不清楚如何返回一个16进制整数 
		}
	}
	
	return sum;
}
