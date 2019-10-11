#include<stdio.h>
//1
/*void main()
{
	int a=0,b=1,sum;
	sum=0;
	while(sum<100)
	{
		a=b;
		b=sum;
		sum=a+b;
		printf(" %d ",sum);
		
	}

}*/

//2
/*void main()
{
	int i=2,sum=0;
	while(i<=100)
	{
		i++;
		sum=sum+i;
		
	}
	printf("sum=%d\n",sum);
}*/

//3

/*void main()
{
	int i,j,tag;
	for(i=2;i<=100;i++)
	{
		tag=0;
		for(j=2;j<i;j++)
			if(i%j==0) tag=1.0;
		if(tag==0)
			printf("%3d",i);	
	}	
}*/

//4
/*void main()
{
	int a,max;
	printf("Enter -1 to end\n");
	do
	{
		printf("Enter a:\n");
		scanf_s("%d",&a);
	}while(a<0&&a!=-1);
	
	max=a;
	while(a!=-1)
	{
		printf("Enter a:\n");
		scanf_s("%d",&a);
		if(a>0&&a>max)
			max=a;
	
	}
	if(max!=-1) printf("max=%d",max);
}
*/

//5
/*void main()
{
	int i=2000,n=0;
	for(;i<=3000;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0))
		{
			n++;
			if(n%10==0)
			{
				printf("\n");
			}
			printf(" %d ",i);
		}
	}
}
*/
//
/*void main()
{
	int i,j;
	for(i=0;i<4;i++)
	{	
		for(j=0;j<8;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}*/

//
/*#define N 4
void main()
{
	int i,j,space;
	for(i=1;i<=N;i++)
	{
		for(space=N;space>i;space--)
		{
			printf(" ");
		}
		for(j=0;j<2*i-1;j++)
		{	
			printf("*");
		}
		
		printf("\n");
	}
	for(i=N-1;i>0;i--)
	{
		for(space=N-1;space>i-1;space--)
		{
			printf(" ");
		}
		for(j=0;j<2*i-1;j++)
		{	
			
			printf("*");
		}
		
		printf("\n");
	}
}
*/