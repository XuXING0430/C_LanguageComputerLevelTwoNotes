#include<stdio.h>
/*������ ��ַ��ָ��*/
/*��ҵ1��д�������Դ��ݹ�������������������͡���ֵ����ͨ���βδ��ͻص��ú���*/

/*void aa(double x,double y,double *phe,double *pcha)
{
	*phe=x+y;
	*pcha=x-y;
}
void main()
{
	double x,y,he,cha;
	x=12.44;
	y=9.6;
	aa(x,y,&he,&cha);
	printf("he=%f\n",he);
	printf("cha=%f\n",cha);
}*/

/*��ҵ2��д�������Դ��͹�������������ѡ�����ֵ������Сֵ����ͨ���βδ��ͻص��ú���*/
void myf(int x,int y,int z,int *pmax,int *pmin)
{
	if(x<y&&y<z)
	{
		*pmax=z;
	    *pmin=x;
	}
	else if(z<y&&y<x)
	{
		*pmax=x;
	    *pmin=z;
	}
	else if(y<x&&x<z)
	{
		*pmax=z;
	    *pmin=y;
	}
	else if(z<x&&x<y)
	{
		*pmax=y;
	    *pmin=z;
	}
	else if(x<z&&z<y)
	{	
		*pmax=y;
	    *pmin=x;
	}
	else if(x<y&&y<z)
	{
		*pmax=z;
	    *pmin=x;
	}
    else if(z<y&&y<x)
	{
		*pmax=x;
	    *pmin=z;
	}    
}
void main()
{
	int x,y,z,max,min;
	printf("Enter x,y,z:\n");
	scanf("%d%d%d",&x,&y,&z);
	myf(x,y,z,&max,&min);
	printf("max=%d\n",max);
	printf("min=%d\n",min);

}
/*int *fun(int *a,int *b)//�������ص�ֵַ
{
	if(*a>*b) return a;
	return b;
}

void main()
{
	int *p,i,j;
	i=10;
	j=20;
	p=fun(&i,&j);
	printf("*p=%d\n",*p);
}
*/
/*дһ��order��int *a,int *b����һ��ʵ�δ����������С��ֵ���ڶ���������Ŵ��*/
/*void swap(int *x,int *y)   //����ֵ���ݣ�ֻ����ʵ�ε��β�
{
	//printf("(2)x=%d,y=%d\n",*x,*y);
	int t;
	t=*x;
	*x=*y;
	*y=t;
	//printf("(3)x=%d,y=%d\n",*x,*y);
}

void order(int *a,int*b)
{
	if(*a>*b) swap(a,b);
}

void main()
{
	int x,y;
	printf("Enter x,y:\n");
	scanf("%d%d",&x,&y);
	printf("(1)x=%d,y=%d\n",x,y);
	order(&x,&y);//�������ڴ��ַ
	printf("(4)x=%d,y=%d\n",x,y);
}
*/
/*void swap(int *x,int *y)   //����ֵ���ݣ�ֻ����ʵ�ε��β�
{
	printf("(2)x=%d,y=%d\n",*x,*y);
	int t;
	t=*x;
	*x=*y;
	*y=t;
	printf("(3)x=%d,y=%d\n",*x,*y);
}

void main()
{
	int x=10,y=20;
	printf("(1)x=%d,y=%d\n",x,y);
	swap(&x,&y);//�������ڴ��ַ
	printf("(4)x=%d,y=%d\n",x,y);
}
*/
/*
int myadd(int *a,int *b)
{
	int sum;
	sum=*a+*b;
	return sum;
}
void main()
{
	int x,y,z;
	printf("Enter x,y:\n");
	scanf("%d%d",&x,&y);
	z=myadd(&x,&y);
	printf("%d+%d=%d\n",x,y,z);
}
*/

/*
void main()
{
	int a=10,*p,**pt;//*p:����һ��ָ�����  **pt:ָ��ָ���ָ�����
	pt=&p;
	double d,*pd;
	p=&a; //��ָ�������ֵ
	pd=&d;
	d=3.1415;
	printf("a=%d\n",a);
	printf("a=%d\n",&a);//&����ַ���������ñ����ڼ�����еĵ�ַ
	printf("a=%d\n",*p);//��ӷ��������
	printf("d=%f\n",*pd);
	printf("a=%d\n",&p);
	printf("a=%d\n",**pt);
}
*/