#include<stdio.h>
#include <math.h>
/*������ ѭ���ṹ*/
/*��ҵ1��*/
/*#define N 4
void main()
{  
	int n,line,space;
	for(line=1;line<=N;line++)//����
	{
	   for(space=N;space>=line;space--) printf(" ");//�ո���
	   for(n=0;n<2*line-1;n++)//ÿ�ж��ٸ��Ǻ�
           printf("*");
	   printf("\n");
	}
	for(line=N-1;line>=0;line--)//����
	{
	   for(space=N;space>=line;space--) printf(" ");//�ո���
	   for(n=0;n<2*line-1;n++)//ÿ�ж��ٸ��Ǻ�
           printf("*");
	   printf("\n");
	}
}
*/
/*��ҵ2��*/
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
/*��ҵ3�������Ԫ2000��3000��֮����������꣬ÿ�����10�����*/
void main()
{
  int y,n=0;
  for(y=2000;y<=3000;y++)
  {
     if(y%4==0&&y%100!=0||y%400==0)//�ж�����
	 {
		 printf("%5d",y);
	     n++;
     }
  if(n%10==0)
	  printf("\n");
  }
}
/*void main()  //����������ɸ����������������ѡ�����ֵ����-1��������
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
/*void main()//continue���
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
/*void main()//��1��100���ڵ���������
{
    int k,i,tag;
	for(i=2;i<=100;i++)
	{
	   tag=0;//��־λ
	   for(k=2;k<i;k++)
		   if(i%k==0) tag=1.0;
	   if(tag==0)
		   printf("%3f",i);
	}
}
*/
/*void main()//2��100���
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
/*void main()  //��forѭ��
{
  int i,sum;
  for(i=1,sum=0;i<=100;i++) //��ʼ���������жϣ�������
	 if(i%2==0)
       sum+=i;

  printf("i=%d,sum=%d\n",i,sum);
}
*/
/*void main()//��ӡ 0 1 1 2 3 5 8 13 21 34��������
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
/*void main()//do while��䣺�����Ƿ����������ѭ���嶼�ᱻִ��һ��
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

/*void main()//����pi��ֵ
{
   float n,pi,t;
   int s;//���Ʒ���
   n=1.0;
   pi=0;
   t=1;//�ۼ���
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