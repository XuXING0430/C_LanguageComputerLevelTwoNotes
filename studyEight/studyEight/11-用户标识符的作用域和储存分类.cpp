#include<stdio.h>
/*变量作用域：局部变量，全局变量
  变量的存储类别：
				auto变量 [自动变量], 
				register[寄存器变量]
				static[静态存储] ：在编译过程中赋值*/
/*

int x=200;	//全局变量（从这一行到后面）
void f1(int a,int b)
{
	static int t=100; //静态局部变量
	printf("t=%d\n",t);
	t++;
	
	//x++;
	//printf("x=%d\n",x);
}

void f2()
{
	x++;
	printf("x=%d\n",x);
}
void main()
{
	f1(1,2);
	f1(1,2);
	f1(1,2);
}
*/
/*
void fun()
{
	static int a;
	a+=2;
	printf("%d\n",a);
}
void main()
{
	int c;
	for(c=1;c<=4;c++)
		fun();
	printf("\n");
}
*/