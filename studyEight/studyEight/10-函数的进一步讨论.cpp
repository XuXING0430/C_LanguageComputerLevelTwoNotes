#include<stdio.h>
#include<math.h>
/*1.����main�����Ĳ���*/
/*void main(int argc,char *argv[])
{
	int i;
	printf("argc=%d\n",argc);
	for(i=0;i<argc;i++)
		puts(argv[i]);
	printf("\n");
}
*/

/*2.ͨ��ʵ���������ݺ�������ָ������ָ�����*/
//ָ������ָ�����
/*double fun(double a,double b) //���������ƴ����˺�������ڵ�ַ
{
	return a+b;
}
void main()
{
	double (*fp)(double x,double y),sum;//fp�Ǵ�������ָ��
	fp=fun; //������ָ�븳ֵ
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
	y=tran(sin,cos,v);//�����У�����ͬ��
	printf("tan(60)=%10.6f\n",y);
}
*/
/*3.�����ĵݹ���ã�
		A��
*/
//��10��
/*int fac(int n)
{
	int t;
	if(n==1||n==0) return 1;
	else
	{
		t=n*fac(n-1);//�ٴε���
	}
}
void main()
{
	int m;
	m=fac(5);
	printf("%d\n",m);
}
*/