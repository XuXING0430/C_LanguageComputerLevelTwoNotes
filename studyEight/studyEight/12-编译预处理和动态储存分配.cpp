#include<stdio.h>
#include<stdlib.h>
/*#define N 5      //编译预处理：编译之前的处理
int a[N];
宏替换：   1.不带参数的宏替换
			2.带参数的宏替换
			3.文件包含
*/
/*#define SIZE 100 //SIZE:宏的名称 100值
#define PI 3.14  //不用考虑数据的类型
#define ADDPI PI+1
#define TWO_ADDPI (2*ADDPI)  // =2*PI+1 有没有括号的区别
#define LEAP_YEAR year%4==0&&year%100!=0||year%400==0
void main()
{
	printf("%d\n",SIZE);
	printf("PI=%f\n",PI);
	printf("ADDPI=%f\n",ADDPI);
	printf("TWO_ADDPI=%f\n",TWO_ADDPI);
	int year=2000;
	if(LEAP_YEAR)
		printf("yes\n");
	else
		printf("no\n");
}
*/

//2.
/*
#include "myhead.h"   //文件包含，注意是""符号
//#define MU(X,Y) (X*Y)   //先替换再求表达式的值
void main()
{
	int m;
	m=MU(3+1,5+2);
	printf("m=%d\n",m);
}


//终止宏的定义
#undef MU
*/

//静态存储分配：存储空间不变
//动态存储分配：malloc,calloc,free
/*void main()
{
	short int *pi;
	pi=(short int *)malloc(sizeof(short int));//返回数据的类型：void *
	*pi=200;
	printf("%d\n",*pi);
	free(pi);  //把pi所指向的存储空间给释放掉                                                         
	pi=(short int *)malloc(sizeof(short int));//返回数据的类型：void *
	*pi=100;
	printf("%d\n",*pi);
	free(pi);  //把pi所指向的存储空间给释放掉

}
*/
/*#define N 3
void main()
{
	char *p;
	int i;
	p=(char *)calloc(N,sizeof(char));//分配多少个存储单元，每个存储单元的字节数
	for(i=1;i<=3;i++)
	{
		*p=getchar();
		p++;
	}
	p-=N; //移动回首位置
	for (i=1;i<=3;i++)
	{
		putchar(*p++);
	}
	p-=N;
	free(p);
}
*/