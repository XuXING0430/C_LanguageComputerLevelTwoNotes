#include<stdio.h>
#include<ctype.h>
#include<math.h>
/*�����£�����*/
/*��ҵ1:��д������ͳ�������ַ��ĸ�������@����*/
/*int aa()
{
	char ch;
	int i=0;
	while((ch=getchar())!='@')
			i++;	
	return i;	
}
void main()
{
	int number;
	number=aa();
	printf("�ַ��ĸ���Ϊ%d\n",number);
	
}*/
/*��ҵ2����д������ͳ��������ı��е��ʵĸ���������֮���ÿո񡢻س�tab�������@����*/
/*#define IN 1
#define OUT 0
int countword()
{
	int c=0,state;
	char ch;
	state=OUT;
	while((ch=getchar())!='@')
	{
		if(ch==' '||ch=='\n'||ch=='\t')
			state=OUT;
		else if(state==OUT)
		{
			state=IN;
			c++;
		}
	    
	}
	return c;
}
void main()
{
    int n; 
	n=countword();
	printf("���ʵĸ���Ϊ%d\n",n);
}
*/


//�û��Զ���ĺ���
/*���⣺isprime(int a);�����ж����������Ƿ���0���Ƿ���1*/
/*int isprime(int a)
{
	int i;
    for(i=2;i<=a;i++)
		if(a%i==0) return 0;
	return 1;
}

void main()
{
	if(isprime(8)==0)
		printf("��������");
	else
		printf("������");
}
*/
/* void swap(int x,int y)   //����ֵ���ݣ�ֻ����ʵ�ε��β�
{
	printf("(2)x=%d,y=%d\n",x,y);
	int t;
	t=x;
	x=y;
	y=t;
	printf("(3)x=%d,y=%d\n",x,y);
}
void main()
{
	int x=10,y=20;
	printf("(1)x=%d,y=%d\n",x,y);
	swap(x,y);
	printf("(4)x=%d,y=%d\n",x,y);
}
*/
/*void ps(int,int);  //����˵��,��ֵ���ƿ��Բ�һ���������ͱ���һ��
void main()
{
	ps(5,8);//ʵ�Σ�ʵ�ʲ���
	ps(3,10);
}

void ps(int m,int n) //����ֵ���� �������ƣ���ʽ������ 
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("*");
		printf("\n");
	}
}*/

/*void xx(int x,int y)
{
	if(x>y)
	{
		printf("max is %d\n",x);
		return;//�߼��ϵķ���
	}
	else if(x<y)
	{
		printf("max is %d\n",y);
		return;
	}
	printf("x==y\n");
}

int getmax(int x,int y)
{
	return x>y?x:y;//����ֵ
}
void main()
{
	int x=10,y=1;
	xx(x,y);
	//printf("max is %d\n",max);
}*/