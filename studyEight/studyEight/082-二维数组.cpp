#include<stdio.h>
/*注意：
	1.二维数组在内存当中占据一串连续的储存单元
	2.二维数组名也是这串连续存储单元的首地址
	3.二维数组中的一维数组是每行的首地址
*/
/*void main()
{
	short int a[3][4],i,j;//定义一个 3行4列 二维数组
	printf("a=%10d\n",a);
	for(i=0;i<3;i++) //行
	{
		printf("a=%10d:",a[i]);
		for(j=0;j<4;j++) //列 
			printf("%10d",&a[i][j]);
		printf("\n");
	}

}
*/

/*二维数组的初始化：赋值*/
/*void main()
{
	//short int a[3][4]={{1,2,3,4},{5,6,7,8},{11,22,33,44}},i,j;//定义一个 3行4列 二维数组
	short int a[][4]={1,2,5,6,7,11,22,33,44},i,j;//列的下标不可以省略
	//printf("a=%10d\n",a);
	for(i=0;i<3;i++) //行
	{
		//printf("a=%10d:",a[i]);
		for(j=0;j<4;j++) //列 
			printf("%10d",a[i][j]);
		printf("\n");
	}

}*/

/*二维数组和指针 a[i]=*(a+i)  *(a+i)=a[i] 第i个元素的地址(一维数组)
			    
		二维数组 a[i][j]的地址表示法：
							1、 &a[i][j]
							2、 a[i]+j
							3、 *(a+i)+j
							4、 a[0][0]+4*i+j
							5、 a[0]+4*i+j

		        a+1[行]：移动了一行
	二维数组中元素的表示法
	                        1、 a[i][j]
							2、 *（a[i]+j）
							3、 *（(a+i)+j）
							4、 (*(a+i))[j]
							5、 *(a[0]+4*i+j)
*/
/*通过建立一个指针数组来引用二维数组中的元素
当用二维数组名作实参时，对应的行参是同类型的指针标量
		int *p[3]
*/
/*void main()
{
	
	short int a[][4]={1,2,5,6,7,11,22,33,44},i,j,*p[3];
	for(i=0;i<3;i++) p[i]=a[i];                                         
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<4;j++)
			printf("%10d",p[i][j]);
		printf("\n");
	}

}
*/
/*行指针：int a[3][4],(*prt)[4](**行指针的下标值等于二维数组的列下标**)*/
/*void main()
{
	
	short int a[][4]={1,2,5,6,7,11,22,33,44},i,j,*p[3],(*prt)[4];
	for(i=0;i<3;i++) p[i]=a[i];
	prt=a; //给行指针变量赋值
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<4;j++)
			printf("%10d",prt[i][j]);
		printf("\n");
	}

}
*/
/*例1：通过调用随机数给5*6得二维数组赋10-40范围内的随机数，求出二维数组每行元素的平均值*/
#include<stdlib.h>
/*#define M 6//列
#define N 5//行
//给数组赋值
void getdata(int sp[][M])//(*sp)[M] 另一种表达方式 sp[][M]，sp[N][M]
{
	int i,j,x;
	for(i=0;i<N;i++)
	{
		j=0;//列
		while(j<M)
		{
			x=rand()%41;//产生0-40以内得随机数
			if(x>=10)
			{
				sp[i][j]=x;
				j++;
			}
		}
	}
}
//输出二维数组元素
void outdata(int (*sp)[M],double *a)
{
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
			printf("%3d",sp[i][j]);
			printf("  :%f",a[i]);
		printf("\n");
	}
}
//每行求平均值
void lineave(int (*sp)[M],double *a)
{
	int i,j;
	double ave;
	for(i=0;i<N;i++)
	{
		ave=0; //归零
		for(j=0;j<M;j++) ave+=sp[i][j];//求得的是每行得和值
		a[i]=ave/M;

	}
}
void main()
{
	int r[N][M];
	double ave[N];//存放每行的平均值
	getdata(r);
	lineave(r,ave);
	outdata(r,ave);

}*/
/*例2：打印杨辉三角形
1
1  1
1  2  1
1  3  3  1
1  4  6  4  1
1  5  10 10 5  1
1  6  15 20 15 6 1 
*/
/*#define N 7
void setdata(int (*s)[N],int n)
{
	int i,j;
	for(i=0;i<n;i++){s[i][i]=1;s[i][0]=1;}
	for(i=2;i<n;i++)
		for(j=1;j<i;j++)
			s[i][j]=s[i-1][j-1]+s[i-1][j];
}
void outdata(int (*s)[N],int n)
{
	int i,j;
	printf("杨辉三角形如下：\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
			printf("%6d",s[i][j]);
		printf("\n");

	}	
}
void main()
 {
	int y[N][N];
	setdata(y,N);
	outdata(y,N);
 }*/