#include<stdio.h>
/*��ҵ1������һ���˵����գ�y0��m0��d0�������뵱ǰ���ڣ�y1��m1��d1�������ʵ������
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
 printf("����Ϊ%d\n",a);
}*/
/*��ҵ2������һ����������ӡ��������������ż��
void main()
{
  int a;
  printf("Enter:\n");
  scanf("%d",&a);
  printf("a=%d\n",a);
  if(a%2==0)
	  printf("aΪż��\n");
  else
	  printf("aΪ����\n");
*/
/*��ҵ3������abc����������ӡ��������*/
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
  printf("���ֵΪmax=%d\n",max);

}*/

/*
void main()//goto��䣺����ĳһ��
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
    case 9:printf("A");break;//�˳���һ��Ƕ�׵������
    case 8:printf("B");break;
    case 7:printf("C");break;
	case 6:printf("D");break;
	default:printf("E");//��һ���λ�ò�Ӱ����
   }
   printf("\n");
}
*/
/*void main()
{
  int x,y,max;//ͨ�� �������ʽ����ȡ��x,y���ֵ
  printf("Enter x&y:\n");
  scanf("%d%d",&x,&y);
  printf("x=%d,y=%d\n",x,y);

  max=x>y?x:y;
  printf("max is %d\n",max);
}
*/

/*���⣺���������ѧ���ĳɼ������ȼ�
       A:90-100
	   B:80-89
	   C:70-79
	   D:60-69
	   E:60����

void main()
{
   int g;
   printf("Enter:\n");
   scanf("%d",&g);
   printf("g=%d\n",g);
   if(g>=90)     //��ĳһ�����������µĳ���Ͷ���ִ��
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

/*���⣺���������������ֱ���ڱ���abc�У�Ȼ�����������ݰ���С���������������
void main()
{
   int a,b,c,t;
   printf("Enter a&b&c:\n");
   scanf("%d%d%d",&a,&b,&c);
   printf("a=%d,b=%d,c=%d\n",a,b,c);
   if(a>b)//a��b�Ƚϣ���a�󣬾Ͱ�b��ֵ��a��С������ǰ�棩
   {
     t=a;
	 a=b;
	 b=t;
   }
   if(a>c)//a��c�Ƚϣ���a�󣬾Ͱ�c��ֵ��a����С������ǰ�棩
   {
     t=a;
	 a=c;
	 c=t;
   }
   if(b>c)//���Ƚ�b c
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
  int x,y,max;//x,yȡ���ֵ
  printf("Enter x&y:\n");
  scanf("%d%d",&x,&y);
  printf("x=%d,y=%d\n",x,y);

  //max=x;//����x�����ֵ
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
/*void main()//��·����
{
   int x,i=0;
   //x=(13<=2)&&(++i>0);//��Ϊǰ���Ǽٵģ�����++iδ��ִ�����Ա���Ϊ����·��
   //x=(1<=2)||(++i>0);//��Ϊǰ������ģ�����++iδ��ִ�У�Ҳ�ǡ���·��
   x=!i;//ȡ��
   printf("x=%d,i=%d\n",x,i);
}
*/

/*void main()//��ϵ��������߼������
{
    int x,y;
	x=1>0;
	y=(1<2)&&(4%2==0);//ע����==
	printf("x=%d,y=%d\n",x,y);
}
*/