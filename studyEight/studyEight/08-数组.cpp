#include<stdio.h>
#include<stdlib.h>
/*�ڰ��£�����*/
/*
a:��������
1.�����ڼ�����ڴ���ռ��һ�������ô洢��Ԫ
2.���������⴮�������浥Ԫ���׵�ַ����ֵ���ɱ�
3.һά������ָ��:��һά��������ʵ��ʱ����Ӧ���β���������ͬ��ָ�����

*/
/*��3����֪�����a�����е��������أ���a�����в��Һ�xֵ��ͬ��Ԫ�ص�λ�ã�
���ҵ��������ֵ�͸�ֵ��a�����е�λ�ã���û���ҵ��������Ӧ����Ϣ
	step1:��ֵ
	step2:���
	step3:����
*/
/*#define NUM 30
//1.��ֵ
int arrin(int *a)
{
	 int n,i;//����ֵԪ�صĸ���
	 do
	 {
		printf("Enter number of elements,0<=n<%d:",NUM);
		scanf("%d",&n);

	 }while(n<1||n>=NUM);
	 printf("Enter %d integer numbers:\n",n);
	 for(i=0;i<n;i++) scanf("%d",a+i);//a�����еĵ�i��Ԫ��

	 return n;
}
//2.���
void outArray(int *pa,int n)
{
	int i;
	for(i=0;i<n;i++)	
		printf("%2d ",*pa++);
	printf("\n");
}
//3.����
int search(int *a,int x,int n)
{
	int i,p;
	i=0;//��a[0]��Ԫ�ؿ�ʼ����
	a[n]=x;//�Ѵ����ҵ�Ԫ�ط���a[n]����
	while(x!=a[i]) i++;
	if(i==n) p=-1;//û�ҵ�
	else
		p=i;
	return p;
}
void main()
{
	int a[NUM],n,x,p;//n:����ֵԪ�صĸ���,x:�����ҵ�ֵ
	n=arrin(a);
	outArray(a,n);
	printf("Enter the number to search:x=");
	scanf("%d",&x);
	p=search(a,x,n);
	if(p!=-1)
		printf("%d index is:%d\n",x,p);
	else 
		printf("%d is not found\n",x);
}
*/
/*��2����֪���������е�ֵ��0-9�ķ�Χ�ڣ�ͳ��ÿ�������ĸ���
    step1�������鸳ֵ
	step2���������Ԫ��
	step3��ͳ��ÿ�������ĸ���
*/
/*
#define N 50
#define M 10
void getrand(int a[N],int n);
void outArray(int *pa,int n);
void stat(int *a,int *c);

void main()
{
	int a[N],c[M];//c[0]--c[9]

	getrand(a,N);//��ֵ
	outArray(a,N);
	stat(a,c);
	outArray(c,M);
}
void stat(int *a,int *c)
{
	int i;
	for(i=0;i<M;i++) c[i]=0;//��c��ʼ��
	for(i=0;i<N;i++) c[a[i]]++;//����ÿ�������ĸ���
}
void getrand(int a[N],int n)//int *a,int a[],int a[size]
{
	int i;
	for(i=0;i<n;i++)
		a[i]=rand()%10;//ȡģ�Ժ������Ϊ0-9
}
void outArray(int *pa,int n)
{
	int i;
	for(i=0;i<n;i++)	
		printf("%2d ",*pa++);
	printf("\n");
}
*/

/*��1����д���򣺶���һ������15��Ԫ�ص����飬����д����������¹��ܣ�
	1.�����������������Ԫ�ظ�ֵ0-49
	2.�������Ԫ�ص�ֵ
	3.��˳���ÿ������Ԫ����һ����ֵ��������������
	4.�����������ĺ�ֵ
	5.�����ֵ����������
	6.��������Ԫ�ذ��ߵ���˳����
*/
/*
#define SIZE 15
#define N 3
#include<stdlib.h> //��������ڵÿ�
void getrand(int *a,int n);
void outArray(int *pa,int n);
void getave(int *x,int *w,int n);
void arrsort(int *x,int n);
void invert(int *a,int n);
void main()
{
	int x[SIZE],w[SIZE/N]={0};  
	getrand(x,SIZE);
	outArray(x,SIZE);
	getave(x,w,SIZE);
	outArray(w,SIZE/N);//4.�����������ĺ�ֵ
	arrsort(x,SIZE);
	outArray(x,SIZE);
	invert(x,SIZE);
	outArray(x,SIZE);
}
//1.�����������������Ԫ�ظ�ֵ0-49
void getrand(int *a,int n)//int *a,int a[],int a[size]
{
	int i;
	for(i=0;i<n;i++)
		a[i]=rand()%50;//ȡģ�Ժ������Ϊ0-49
}
//2.�������Ԫ�ص�ֵ
void outArray(int *pa,int n)
{
	int i;
	for(i=0;i<n;i++)	
		printf("%d ",*pa++);
	printf("\n");
}
//3.��˳���ÿ������Ԫ����һ����ֵ��������������
void getave(int *x,int *w,int n)
{
	int i,j,sum;
	for(sum=0,i=0,j=0;i<=n;i++)
	{
		sum+=x[i];
		if((i+1)%3==0)
		{
			w[j]=sum;
			sum=0;
			j++;
		}
	}
}
//5.�����ֵ����������
void arrsort(int *x,int n)
{
	int i,j,p,t;
	for(j=0;j<n-1;j++)
	{
		p=j;
		for(i=j+1;i<n;i++)
			if(x[p]>x[i]) p=i;//ʼ��ָ����СԪ�ص��±�
		if(p!=j)
		{
			t=x[j];x[j]=x[p];x[p]=t;
		}
	}

}
//6.��������Ԫ�ذ��ߵ���˳����
void invert(int *a,int n)
{
	int i,j,t;//�ֱ�ָ����β
	i=0;j=n-1;
	while(i<j)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		i++;
		j--;
	}
}
*/
/*
#define N 5
void outArray(short int *pa,int n)
{
	for(int i=0;i<n;i++)	
	printf("%d \n",*pa++);
}
void inArray(short int *pa,int n)
{
	printf("Enter:");
}
void main()//��������
{
	short int a[N];//����ֵ
	inArray(a,N);
	outArray(a,N);
	//short int b[8]={1,2,3,4,5,6,7,8};
	//outArray(b,sizeof(b)/sizeof(short int));
}
*/
/*
void main()
{
	char c[]={'G','o','a','L'};
	for(int i=0;i<sizeof(c)/sizeof(char);i++)
		putchar(c[i]);
	printf("\n");
}
*/

/*void main()//��������
{
	short int a[]={11,22,33,55,77,99},i;//����ֵ
	for(i=0;i<sizeof(a)/sizeof(short int);i++)
		printf("%d\n",a[i]);
}
*/
