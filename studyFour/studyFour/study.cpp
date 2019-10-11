#include<stdio.h>
#include <math.h>
/*第四章 循环结构*/
/*作业1：*/
/*#define N 4
void main()
{  
	int n,line,space;
	for(line=1;line<=N;line++)//行数
	{
	   for(space=N;space>=line;space--) printf(" ");//空格数
	   for(n=0;n<2*line-1;n++)//每行多少个星号
           printf("*");
	   printf("\n");
	}
	for(line=N-1;line>=0;line--)//行数
	{
	   for(space=N;space>=line;space--) printf(" ");//空格数
	   for(n=0;n<2*line-1;n++)//每行多少个星号
           printf("*");
	   printf("\n");
	}
}
*/
/*作业2：*/
/*void main()
{ 
	int n,line;
	for(line=1;line<=4;line++)
	{	
		for(n=0;n<8;n++)
			printf("*");
		printf("\n");
	}
}
*/
/*作业3：输出公元2000到3000年之间的所有闰年，每行输出10个年号*/
void main()
{
  int y,n=0;
  for(y=2000;y<=3000;y++)
  {
     if(y%4==0&&y%100!=0||y%400==0)//判断闰年
	 {
		 printf("%5d",y);
	     n++;
     }
  if(n%10==0)
	  printf("\n");
  }
}
/*void main()  //从输入的若干个大于零的正整数中选出最大值，用-1结束输入
{
  int x,max;
  printf("Enter -1 to end\n");
  do
  {
    printf("Enter x:\n");scanf("%d",&x);

  }while(x<0&&x!=-1);

  max=x;
  while(x!=-1)
  {
    printf("Enter x:\n");scanf("%d",&x);
	if(x>0&&x>max) max=x;
  }

  if(max!=-1) printf("max=%d\n",max);
}
*/
/*void main()//continue语句
{
  int k=0,i=1,s=0;
  for(;i<=5;i++)
  {
	 s+=i;
	 if(s>5)
     {    
		 printf("______i=%d,k=%d,s=%d\n",i,k,s);
	     continue;
	 }
  
     k+=s;
     printf("i=%d,k=%d,s=%d\n",i,k,s);
  }
}
*/
/*void main()//求1到100以内的所有素数
{
    int k,i,tag;
	for(i=2;i<=100;i++)
	{
	   tag=0;//标志位
	   for(k=2;k<i;k++)
		   if(i%k==0) tag=1.0;
	   if(tag==0)
		   printf("%3f",i);
	}
}
*/
/*void main()//2到100求和
{
  int i=2,sum=0;
  for(;i<=100;)
  {
    sum+=i;
	i=i+2;
  }
  printf("i=%d,sum=%d\n",i,sum);
}
*/
/*void main()  //用for循环
{
  int i,sum;
  for(i=1,sum=0;i<=100;i++) //初始化；条件判断；自增量
	 if(i%2==0)
       sum+=i;

  printf("i=%d,sum=%d\n",i,sum);
}
*/
/*void main()//打印 0 1 1 2 3 5 8 13 21 34。。。。
{
  int f1,f2,f3,n=20;
  f1=0;
  f2=1;
  printf("%d %d ",f1,f2);

  while(n>2)
  {
   f3=f1+f2;
   printf("%d ",f3);
   f1=f2;
   f2=f3;
   n--;
  }
}
*/
/*void main()//do while语句：不论是否符合条件，循环体都会被执行一次
{
   int i,sum;
   i=1,sum=0;

   do
   {
      sum+=i;
	  i++;
   }while(i<=100);
   printf("i=%d,sum=%d\n",i,sum);
}
*/
/*void main()
{
   int i,sum;
   i=1,sum=0;

   while(i<=100)
   {
      sum+=i;
	  i++;
   }
   printf("i=%d,sum=%d\n",i,sum);
}
*/

/*void main()//估算pi的值
{
   float n,pi,t;
   int s;//控制符号
   n=1.0;
   pi=0;
   t=1;//累加项
   s=1;

   while(fabs(t)>1e-6)
   {
     pi=pi+t;
	 n+=2;
	 s=-s;
	 t=s/n;
   }
   pi=4*pi;
   printf("pi=%f\n",pi);
}
*/