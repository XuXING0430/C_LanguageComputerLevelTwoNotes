#include<stdio.h>
/*��ҵ1����������������1500��350�������ǵ��̺����������������
void main()
{
 int a,b,c,d;//c���̣�d������
 printf("Enter:\n");
 scanf("%d%d",&a,&b);
 a=1500,b=350;
 c=a/b;
 d=a%b;
 printf("c=%d,d=%d\n",c,d);
}
*/

/*��ҵ2����������˫����������ƽ��ֵ��������ƽ��ֵС������һλ���Եڶ�λ�����������봦��

void main()
{
 double a,b,c,d;
 printf("������������ֵ��\n");
 scanf("%lf%lf%lf",&a,&b,&c);
 d=(a+b+c)/3;
 printf("d=%0.1f\n",d);
 d*=10;
 d+=0.5;
 d=(int)d;
 d/=10;
 printf("d=%f\n",d);
}
*/

/*��ҵ3�����������������ֱ�ֵ��abc��Ȼ�󽻻���ֵ����a��b����b��c����c��a�������abc
*/
void main()
{
 int a,b,c,d;
 printf("����������������\n");
 scanf("%d%d%d",&a,&b,&c);
 printf("a=%d,b=%d,c=%d\n",a,b,c);
 d=a,a=c,c=b,b=d;
 printf("a=%d,b=%d,c=%d\n",a,b,c);
}
/*void main()//���⣺����һ��double���͵���������С�������λ��Ȼ�����
{
  double x;
  printf("Enter x:\n");
  scanf("%lf",&x);
  printf("x=%.2f\n",x);//Ҳ������λ�ķ�ʽ
  x*=100;
  x+=0.5;
  x=(int)x;//ǿ������ת��
  x/=100;
  printf("x=%f\n",x);
}
*/

/*void main()//���⣺����x,y ������x y����ֵ��֮�����������
{
  int x,y,t;
  printf("Enter two numbers:\n");
  scanf("%d%d",&x,&y);
  printf("x=%d,y=%d\n",x,y);
  //t=x;
  //x=y;
  //y=t;
  x=x+y,y=x-y,x=x-y;//����x,y����ֵ
  printf("Swap:\n");
  printf("x=%d,y=%d\n",x,y);
}
*/

/*void main()
{
 int t1,t2;
 printf("��������������:\n");
 scanf("%d%d",&t1,&t2);
 printf("t1=%d,t2=%d\n",t1,t2);
}
*/

/*void main()  //��������
{
  char c1,c2;//A B
  int t1,t2;//11 22
  printf("Enter\n");
  scanf("%d%c%d%c",&t1,&c1,&t2,&c2); //&����ַ���������ñ����ڼ�����ڴ��еĵ�ַ
  printf("c1=%c,c2=%c,t1=%d,t2=%d\n",c1,c2,t1,t2);
}
*/

/*void main()//�����������
{
  short int i=10;
  double d = 1233.222;
  char c[10]="hello";
  printf("i=%#o\n",i);
  printf("i=%#x\n",i);
  printf("d=%e\n",d);
  printf("d=%10.2f\n",d);
  printf("%s\n",c);
}*/

/*void main() //�������
{   
 char ch='a';
 printf("ch=%c\n",ch);
}*/