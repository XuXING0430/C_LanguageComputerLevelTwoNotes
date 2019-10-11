#include<stdio.h>
/*作业1：输入两个整数，1500和350，求它们的商和余数，并进行输出
void main()
{
 int a,b,c,d;//c是商，d是余数
 printf("Enter:\n");
 scanf("%d%d",&a,&b);
 a=1500,b=350;
 c=a/b;
 d=a%b;
 printf("c=%d,d=%d\n",c,d);
}
*/

/*作业2：读入三个双精度数，求平均值，并保留平均值小数点后第一位，对第二位进行四舍五入处理

void main()
{
 double a,b,c,d;
 printf("请输入三个数值：\n");
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

/*作业3：读入三个整数，分别赋值给abc，然后交换数值，把a给b，把b给c，把c给a，并输出abc
*/
void main()
{
 int a,b,c,d;
 printf("请输入三个整数：\n");
 scanf("%d%d%d",&a,&b,&c);
 printf("a=%d,b=%d,c=%d\n",a,b,c);
 d=a,a=c,c=b,b=d;
 printf("a=%d,b=%d,c=%d\n",a,b,c);
}
/*void main()//例题：输入一个double类型的数，保留小数点后两位，然后输出
{
  double x;
  printf("Enter x:\n");
  scanf("%lf",&x);
  printf("x=%.2f\n",x);//也可以移位的方式
  x*=100;
  x+=0.5;
  x=(int)x;//强制类型转换
  x/=100;
  printf("x=%f\n",x);
}
*/

/*void main()//例题：输入x,y 并交换x y的数值，之后再输出检验
{
  int x,y,t;
  printf("Enter two numbers:\n");
  scanf("%d%d",&x,&y);
  printf("x=%d,y=%d\n",x,y);
  //t=x;
  //x=y;
  //y=t;
  x=x+y,y=x-y,x=x-y;//交换x,y的数值
  printf("Swap:\n");
  printf("x=%d,y=%d\n",x,y);
}
*/

/*void main()
{
 int t1,t2;
 printf("请输入两个整数:\n");
 scanf("%d%d",&t1,&t2);
 printf("t1=%d,t2=%d\n",t1,t2);
}
*/

/*void main()  //数据输入
{
  char c1,c2;//A B
  int t1,t2;//11 22
  printf("Enter\n");
  scanf("%d%c%d%c",&t1,&c1,&t2,&c2); //&：求址运算符，求得变量在计算机内存中的地址
  printf("c1=%c,c2=%c,t1=%d,t2=%d\n",c1,c2,t1,t2);
}
*/

/*void main()//进制数据输出
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

/*void main() //数据输出
{   
 char ch='a';
 printf("ch=%c\n",ch);
}*/