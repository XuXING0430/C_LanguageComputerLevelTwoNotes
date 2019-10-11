#include<stdio.h>
#include<stdlib.h>
/*第八章：数组*/
/*
a:数组名称
1.数组在计算机内存中占据一串连续得存储单元
2.数组名是这串连续储存单元得首地址，其值不可变
3.一维数组与指针:当一维数组名做实参时，对应的形参是类型相同的指针变量

*/
/*例3：已知存放在a数组中的数不相重，在a数组中查找和x值相同的元素的位置，
若找到，输出该值和该值在a数组中的位置；若没有找到，输出相应的信息
	step1:赋值
	step2:输出
	step3:查找
*/
/*#define NUM 30
//1.赋值
int arrin(int *a)
{
	 int n,i;//待赋值元素的个数
	 do
	 {
		printf("Enter number of elements,0<=n<%d:",NUM);
		scanf("%d",&n);

	 }while(n<1||n>=NUM);
	 printf("Enter %d integer numbers:\n",n);
	 for(i=0;i<n;i++) scanf("%d",a+i);//a数组中的第i个元素

	 return n;
}
//2.输出
void outArray(int *pa,int n)
{
	int i;
	for(i=0;i<n;i++)	
		printf("%2d ",*pa++);
	printf("\n");
}
//3.查找
int search(int *a,int x,int n)
{
	int i,p;
	i=0;//从a[0]个元素开始查找
	a[n]=x;//把待查找的元素放入a[n]当中
	while(x!=a[i]) i++;
	if(i==n) p=-1;//没找到
	else
		p=i;
	return p;
}
void main()
{
	int a[NUM],n,x,p;//n:待赋值元素的个数,x:待查找的值
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
/*例2：已知整形数组中的值在0-9的范围内，统计每个整数的个数
    step1：给数组赋值
	step2：输出数组元素
	step3：统计每个整数的个数
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

	getrand(a,N);//赋值
	outArray(a,N);
	stat(a,c);
	outArray(c,M);
}
void stat(int *a,int *c)
{
	int i;
	for(i=0;i<M;i++) c[i]=0;//给c初始化
	for(i=0;i<N;i++) c[a[i]]++;//计算每个整数的个数
}
void getrand(int a[N],int n)//int *a,int a[],int a[size]
{
	int i;
	for(i=0;i<n;i++)
		a[i]=rand()%10;//取模以后得余数为0-9
}
void outArray(int *pa,int n)
{
	int i;
	for(i=0;i<n;i++)	
		printf("%2d ",*pa++);
	printf("\n");
}
*/

/*例1：编写程序：定义一个含有15个元素的数组，并编写函数完成以下功能：
	1.调用随机函数给数组元素赋值0-49
	2.输出数组元素的值
	3.按顺序对每个三个元素求一个和值，并传回主函数
	4.输出所有求出的和值
	5.输出的值按升序排列
	6.将数组中元素按颠倒得顺序存放
*/
/*
#define SIZE 15
#define N 3
#include<stdlib.h> //随机数所在得库
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
	outArray(w,SIZE/N);//4.输出所有求出的和值
	arrsort(x,SIZE);
	outArray(x,SIZE);
	invert(x,SIZE);
	outArray(x,SIZE);
}
//1.调用随机函数给数组元素赋值0-49
void getrand(int *a,int n)//int *a,int a[],int a[size]
{
	int i;
	for(i=0;i<n;i++)
		a[i]=rand()%50;//取模以后得余数为0-49
}
//2.输出数组元素的值
void outArray(int *pa,int n)
{
	int i;
	for(i=0;i<n;i++)	
		printf("%d ",*pa++);
	printf("\n");
}
//3.按顺序对每个三个元素求一个和值，并传回主函数
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
//5.输出的值按升序排列
void arrsort(int *x,int n)
{
	int i,j,p,t;
	for(j=0;j<n-1;j++)
	{
		p=j;
		for(i=j+1;i<n;i++)
			if(x[p]>x[i]) p=i;//始终指向最小元素的下标
		if(p!=j)
		{
			t=x[j];x[j]=x[p];x[p]=t;
		}
	}

}
//6.将数组中元素按颠倒得顺序存放
void invert(int *a,int n)
{
	int i,j,t;//分别指向首尾
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
void main()//整形数组
{
	short int a[N];//赋初值
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

/*void main()//整形数组
{
	short int a[]={11,22,33,55,77,99},i;//赋初值
	for(i=0;i<sizeof(a)/sizeof(short int);i++)
		printf("%d\n",a[i]);
}
*/
