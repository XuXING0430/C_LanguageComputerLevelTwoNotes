#include <stdio.h>  //i:input  o:output .h head
void main()//�Լ��Լ�
{
    int i=3,t;
	t=(i++,++i,i+5); //���ű��ʽ������������
	printf("i=%d,t=%d\n",i,t);
}
/*void main()//�Լ��Լ�
{
    int i=5,t;
	t=--i;
	printf("i=%d,t=%d\n",i,t);
}
*/
/*void main() //���ϸ�ֵ���ʽ������
{
	int a=9;
	int t=(a+=a-=a+a); //�����������
	printf("t=%d,a=%d\n",t,a);
}*/

/*void main() //����ת������
{
	int t=(int)(1.0/2);
	printf("%f\n",t);
}
*/

/*void main() //ʵ������
{
	float f=1.123456789123456;
	double d=1.123456789123456;

	printf("f=%20.15f\n",f);
	printf("d=%20.15f\n",d);
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(double));
}*/
/*void main()  //չʾ�������͵Ĵ�С���ֽ�����
{
	unsigned short int t=65535; //�޷��ŵģ���ʾ�Ǹ���
	printf("%d\n",t);
	//printf("%d\n",sizeof(short int));
}
*/

/*
#define PI 3.1415926  //����Ҫ��#�����ӷֺ�
void main() //����,����
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