#include<stdio.h>
#include<stdlib.h>
/*#define N 5      //����Ԥ��������֮ǰ�Ĵ���
int a[N];
���滻��   1.���������ĺ��滻
			2.�������ĺ��滻
			3.�ļ�����
*/
/*#define SIZE 100 //SIZE:������� 100ֵ
#define PI 3.14  //���ÿ������ݵ�����
#define ADDPI PI+1
#define TWO_ADDPI (2*ADDPI)  // =2*PI+1 ��û�����ŵ�����
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
#include "myhead.h"   //�ļ�������ע����""����
//#define MU(X,Y) (X*Y)   //���滻������ʽ��ֵ
void main()
{
	int m;
	m=MU(3+1,5+2);
	printf("m=%d\n",m);
}


//��ֹ��Ķ���
#undef MU
*/

//��̬�洢���䣺�洢�ռ䲻��
//��̬�洢���䣺malloc,calloc,free
/*void main()
{
	short int *pi;
	pi=(short int *)malloc(sizeof(short int));//�������ݵ����ͣ�void *
	*pi=200;
	printf("%d\n",*pi);
	free(pi);  //��pi��ָ��Ĵ洢�ռ���ͷŵ�                                                         
	pi=(short int *)malloc(sizeof(short int));//�������ݵ����ͣ�void *
	*pi=100;
	printf("%d\n",*pi);
	free(pi);  //��pi��ָ��Ĵ洢�ռ���ͷŵ�

}
*/
/*#define N 3
void main()
{
	char *p;
	int i;
	p=(char *)calloc(N,sizeof(char));//������ٸ��洢��Ԫ��ÿ���洢��Ԫ���ֽ���
	for(i=1;i<=3;i++)
	{
		*p=getchar();
		p++;
	}
	p-=N; //�ƶ�����λ��
	for (i=1;i<=3;i++)
	{
		putchar(*p++);
	}
	p-=N;
	free(p);
}
*/