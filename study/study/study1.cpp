#include <stdio.h>  //i:input  o:output .h head
void main()//自加自减
{
    int i=3,t;
	t=(i++,++i,i+5); //逗号表达式，从左到右运算
	printf("i=%d,t=%d\n",i,t);
}
/*void main()//自加自减
{
    int i=5,t;
	t=--i;
	printf("i=%d,t=%d\n",i,t);
}
*/
/*void main() //复合赋值表达式计算题
{
	int a=9;
	int t=(a+=a-=a+a); //从右往左计算
	printf("t=%d,a=%d\n",t,a);
}*/

/*void main() //数据转换问题
{
	int t=(int)(1.0/2);
	printf("%f\n",t);
}
*/

/*void main() //实型数据
{
	float f=1.123456789123456;
	double d=1.123456789123456;

	printf("f=%20.15f\n",f);
	printf("d=%20.15f\n",d);
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(double));
}*/
/*void main()  //展示数据类型的大小（字节数）
{
	unsigned short int t=65535; //无符号的，表示非负数
	printf("%d\n",t);
	//printf("%d\n",sizeof(short int));
}
*/

/*
#define PI 3.1415926  //定义要加#，不加分号
void main() //常量,变量
{
	double r,s;
	r=5.0;
	s=PI*r*r;
	printf("s=%f\n",s);
}
*/

/* 
	int main()
{  
	printf("hello world\n");
	return 0;
}
*/