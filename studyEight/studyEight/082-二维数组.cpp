#include<stdio.h>
/*ע�⣺
	1.��ά�������ڴ浱��ռ��һ�������Ĵ��浥Ԫ
	2.��ά������Ҳ���⴮�����洢��Ԫ���׵�ַ
	3.��ά�����е�һά������ÿ�е��׵�ַ
*/
/*void main()
{
	short int a[3][4],i,j;//����һ�� 3��4�� ��ά����
	printf("a=%10d\n",a);
	for(i=0;i<3;i++) //��
	{
		printf("a=%10d:",a[i]);
		for(j=0;j<4;j++) //�� 
			printf("%10d",&a[i][j]);
		printf("\n");
	}

}
*/

/*��ά����ĳ�ʼ������ֵ*/
/*void main()
{
	//short int a[3][4]={{1,2,3,4},{5,6,7,8},{11,22,33,44}},i,j;//����һ�� 3��4�� ��ά����
	short int a[][4]={1,2,5,6,7,11,22,33,44},i,j;//�е��±겻����ʡ��
	//printf("a=%10d\n",a);
	for(i=0;i<3;i++) //��
	{
		//printf("a=%10d:",a[i]);
		for(j=0;j<4;j++) //�� 
			printf("%10d",a[i][j]);
		printf("\n");
	}

}*/

/*��ά�����ָ�� a[i]=*(a+i)  *(a+i)=a[i] ��i��Ԫ�صĵ�ַ(һά����)
			    
		��ά���� a[i][j]�ĵ�ַ��ʾ����
							1�� &a[i][j]
							2�� a[i]+j
							3�� *(a+i)+j
							4�� a[0][0]+4*i+j
							5�� a[0]+4*i+j

		        a+1[��]���ƶ���һ��
	��ά������Ԫ�صı�ʾ��
	                        1�� a[i][j]
							2�� *��a[i]+j��
							3�� *��(a+i)+j��
							4�� (*(a+i))[j]
							5�� *(a[0]+4*i+j)
*/
/*ͨ������һ��ָ�����������ö�ά�����е�Ԫ��
���ö�ά��������ʵ��ʱ����Ӧ���в���ͬ���͵�ָ�����
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
/*��ָ�룺int a[3][4],(*prt)[4](**��ָ����±�ֵ���ڶ�ά��������±�**)*/
/*void main()
{
	
	short int a[][4]={1,2,5,6,7,11,22,33,44},i,j,*p[3],(*prt)[4];
	for(i=0;i<3;i++) p[i]=a[i];
	prt=a; //����ָ�������ֵ
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<4;j++)
			printf("%10d",prt[i][j]);
		printf("\n");
	}

}
*/
/*��1��ͨ�������������5*6�ö�ά���鸳10-40��Χ�ڵ�������������ά����ÿ��Ԫ�ص�ƽ��ֵ*/
#include<stdlib.h>
/*#define M 6//��
#define N 5//��
//�����鸳ֵ
void getdata(int sp[][M])//(*sp)[M] ��һ�ֱ�﷽ʽ sp[][M]��sp[N][M]
{
	int i,j,x;
	for(i=0;i<N;i++)
	{
		j=0;//��
		while(j<M)
		{
			x=rand()%41;//����0-40���ڵ������
			if(x>=10)
			{
				sp[i][j]=x;
				j++;
			}
		}
	}
}
//�����ά����Ԫ��
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
//ÿ����ƽ��ֵ
void lineave(int (*sp)[M],double *a)
{
	int i,j;
	double ave;
	for(i=0;i<N;i++)
	{
		ave=0; //����
		for(j=0;j<M;j++) ave+=sp[i][j];//��õ���ÿ�еú�ֵ
		a[i]=ave/M;

	}
}
void main()
{
	int r[N][M];
	double ave[N];//���ÿ�е�ƽ��ֵ
	getdata(r);
	lineave(r,ave);
	outdata(r,ave);

}*/
/*��2����ӡ���������
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
	printf("������������£�\n");
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