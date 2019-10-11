#include<stdio.h>
#include<math.h>
/*1.传给main函数的参数*/
/*void main(int argc,char *argv[])
{
	int i;
	printf("argc=%d\n",argc);
	for(i=0;i<argc;i++)
		puts(argv[i]);
	printf("\n");
}
*/

/*2.通过实参向函数传递函数名或指向函数的指针变量*/
//指向函数的指针变量
/*double fun(double a,double b) //函数的名称代表了函数的入口地址
{
	return a+b;
}
void main()
{
	double (*fp)(double x,double y),sum;//fp是带参数的指针
	fp=fun; //给函数指针赋值
	sum=(*fp)(1.1,2.2);
	printf("sum=%f\n",sum);
}
*/

/*double tran(double (*f1)(double),double (*f2)(double),double x)
{
	return (*f1)(x)/(*f2)(x);
}
void main()
{
	double y,v;
	v=60*3.14/180.0;
	y=tran(sin,cos,v);//求正切，余切同理
	printf("tan(60)=%10.6f\n",y);
}
*/
/*3.函数的递归调用：
		A：
*/
//求10！
/*int fac(int n)
{
	int t;
	if(n==1||n==0) return 1;
	else
	{
		t=n*fac(n-1);//再次调用
	}
}
void main()
{
	int m;
	m=fac(5);
	printf("%d\n",m);
}
*/