#include<stdio.h>
/*���������򣺾ֲ�������ȫ�ֱ���
  �����Ĵ洢���
				auto���� [�Զ�����], 
				register[�Ĵ�������]
				static[��̬�洢] ���ڱ�������и�ֵ*/
/*

int x=200;	//ȫ�ֱ���������һ�е����棩
void f1(int a,int b)
{
	static int t=100; //��̬�ֲ�����
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