#include<stdio.h>
/*作业1：输入一个人的生日（y0，m0，d0），输入当前日期（y1，m1，d1）求此人实足年龄
void main()
{
 int y0,m0,d0,y1,m1,d1,a=0;
 printf("Enter birthday:\n");
 scanf("%d%d%d",&y0,&m0,&d0);
 printf("%d-%d-%d\n",y0,m0,d0);

 printf("Now is:\n");
 scanf("%d%d%d",&y1,&m1,&d1);
 printf("%d-%d-%d\n",y1,m1,d1);

 if(y1==y0)
   a=0;
 else if(m0<m1)
   a=y1-y0;
 else if(d0<=d1)
   a=y1-y0-1;
 else
   a=y1-y0-1;
   
 if(m0<m1||m0==m1&&d0<=d1)
	 a=y1-y0;
 else
	 a=y1-y0-1;
 printf("年龄为%d\n",a);
}*/
/*作业2：输入一个整数，打印出它是奇数还是偶数
void main()
{
  int a;
  printf("Enter:\n");
  scanf("%d",&a);
  printf("a=%d\n",a);
  if(a%2==0)
	  printf("a为偶数\n");
  else
	  printf("a为奇数\n");
*/
/*作业3：输入abc三个数，打印出最大的数*/
/*void main()
{
  int a,b,c,max;
  printf("Enter:\n");
  scanf("%d%d%d",&a,&b,&c);
  printf("a=%d,b=%d,c=%d\n",a,b,c);
  max=a;
  if(max<b)
	  max=b;
  if(max<c)
	  max=c;
  printf("最大值为max=%d\n",max);

}*/

/*
void main()//goto语句：跳到某一行
{
line1:printf("aaaa\n");
line2:printf("bbbbbbbbb\n");
line3:printf("ccccccc\n");
	goto line2;
}
*/
/*void main()
{
   int g;
   printf("Enter:\n");
   scanf("%d",&g);
   printf("g=%d\n",g);
   switch(g/10)//90-99
   {
    case 10:
    case 9:printf("A");break;//退出那一层嵌套的语句体
    case 8:printf("B");break;
    case 7:printf("C");break;
	case 6:printf("D");break;
	default:printf("E");//这一句的位置不影响结果
   }
   printf("\n");
}
*/
/*void main()
{
  int x,y,max;//通过 条件表达式：求取的x,y最大值
  printf("Enter x&y:\n");
  scanf("%d%d",&x,&y);
  printf("x=%d,y=%d\n",x,y);

  max=x>y?x:y;
  printf("max is %d\n",max);
}
*/

/*例题：根据输入的学生的成绩给出等级
       A:90-100
	   B:80-89
	   C:70-79
	   D:60-69
	   E:60以下

void main()
{
   int g;
   printf("Enter:\n");
   scanf("%d",&g);
   printf("g=%d\n",g);
   if(g>=90)     //当某一个成立，余下的程序就都不执行
     printf("A");
   else if(g>=80)
     printf("B");
   else if(g>=70)
     printf("C");
   else if(g>=60)
     printf("D");
   else
	   printf("E");
   printf("\n");
}
*/

/*例题：输入三个整数，分别放在变量abc中，然后把输入的数据按由小到大重新排列输出
void main()
{
   int a,b,c,t;
   printf("Enter a&b&c:\n");
   scanf("%d%d%d",&a,&b,&c);
   printf("a=%d,b=%d,c=%d\n",a,b,c);
   if(a>b)//a和b比较，若a大，就把b的值给a（小的数在前面）
   {
     t=a;
	 a=b;
	 b=t;
   }
   if(a>c)//a和c比较，若a大，就把c的值给a（最小的数在前面）
   {
     t=a;
	 a=c;
	 c=t;
   }
   if(b>c)//最后比较b c
   {
     t=b;
	 b=c;
	 c=t;
   }
   printf("a=%d,b=%d,c=%d\n",a,b,c);
}
*/
/*
void main()
{
  int x,y,max;//x,y取最大值
  printf("Enter x&y:\n");
  scanf("%d%d",&x,&y);
  printf("x=%d,y=%d\n",x,y);

  //max=x;//假设x是最大值
  if(x<y)
  {
     max=y;
	 printf("x<y is running\n");
  }
  else
  {
     max=x;
	 printf("x>y is running\n");
  }
  printf("max is %d\n",max);
}
*/
/*void main()//短路现象
{
   int x,i=0;
   //x=(13<=2)&&(++i>0);//因为前面是假的，所以++i未被执行所以被称为‘短路’
   //x=(1<=2)||(++i>0);//因为前面是真的，所以++i未被执行，也是‘短路’
   x=!i;//取非
   printf("x=%d,i=%d\n",x,i);
}
*/

/*void main()//关系运算符与逻辑运算符
{
    int x,y;
	x=1>0;
	y=(1<2)&&(4%2==0);//注意是==
	printf("x=%d,y=%d\n",x,y);
}
*/