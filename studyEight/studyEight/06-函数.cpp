#include<stdio.h>
#include<ctype.h>
#include<math.h>
/*第六章：函数*/
/*作业1:编写函数，统计输入字符的个数，用@结束*/
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
	printf("字符的个数为%d\n",number);
	
}*/
/*作业2：编写函数，统计输入的文本中单词的个数，单词之间用空格、回车tab间隔，以@结束*/
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
	printf("单词的个数为%d\n",n);
}
*/


//用户自定义的函数
/*例题：isprime(int a);用来判断素数，不是返回0，是返回1*/
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
		printf("不是素数");
	else
		printf("是素数");
}
*/
/* void swap(int x,int y)   //单项值传递：只能由实参到形参
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
/*void ps(int,int);  //函数说明,数值名称可以不一样，但类型必须一样
void main()
{
	ps(5,8);//实参：实际参数
	ps(3,10);
}

void ps(int m,int n) //返回值类型 函数名称（形式参数） 
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
		return;//逻辑上的返回
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
	return x>y?x:y;//返回值
}
void main()
{
	int x=10,y=1;
	xx(x,y);
	//printf("max is %d\n",max);
}*/