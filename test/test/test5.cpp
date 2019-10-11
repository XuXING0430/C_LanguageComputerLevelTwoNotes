#include<stdio.h>
//1
/*void main()
{
	int i;
	char t='a';
	for(i=0;i<26;i++)
	{
		printf("%c,%d\n",t,t);
		t++;
	}
}
*/
//2
/*void main()
{	
	char x;
	int i;
	printf("ÇëÊäÈëÒ»ÐÐ×Ö·û\n");
	
	for(i=0;i<20;i++)
	{
		x=getchar();
		if(x>=97&&x<=122)
		x=x-32;
		printf("%c",x);
	}
}
*/

//3
void main()
{
	char x;
	printf("ÇëÊäÈëÃÜÂë£º\n");
	while(x!='@');
	{
		x=getchar();
	}
	printf("%c",x);
}
//4
//5
/*#define N 5
void main()
{
	char x='A'-1;
	int i,j,space;
	for(i=1;i<=N;i++)
	{	
		x++;
		for(space=N-1;space>i-1;space--)
			printf(" ");
		for(j=0;j<2*i-1;j++)
			printf("%c",x);
		printf("\n");
	}
	
}
*/