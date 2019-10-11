#include<stdio.h>
//第九章 字符串
/*
	字符：'',' ','A','B','\n'
	字符串：""," ","AB"
	      \0 自动增加(作为串的结束标记，占据存储空间，但不计入串的长度)
*/
//1.用一维数组来存储字符串：char s[10]="";(直接赋值)     

/*void main()
{
	char s[10]="Hello",*sp;
	char a[]="Hello";
	char c[6]="Hello";//6个，因为末尾还有一个 \0
	sp="Hello";
	//s="Hello";
}
*/
/*2、字符串的输入与输出
	getchar()
	putchar();
	scanf("%c");
	printf("%c");

	scanf("%s");
	printf("%s");

	gets():读入串
	puts():输出串
*/
/*void main()
{
	char str[10],*sp;
	sp=str; //要给指针sp赋值
	printf("Enter:\n");
	gets(&str[1]); //读入数据，可以读入 空格 
	puts(&str[1]); //要求参数是：地址
	//scanf("%s",sp); //scanf函数输入不能直接输入空格
	//printf("%s\n",sp);
}
*/

/*3.字符串数组
	
*/

/*void main()
{
	//char ca[][5]={"A","BB","CCC"};
	char *pa[3]={"A","BB","CCC"};
	int i;
	for(i=0;i<3;i++)
		puts(pa[i]);
}*/

//4.字符串处理函数
#include<string.h>
//strcpy 字符串复制：
/*void main()
{
	char str1[10]="BA",str2[10]="BB";
	
	puts(str1);
	puts(str2);
	//strcpy(str1,str2); //把str2串拷贝到str1中
	//strcat(str1,str2); //把str2串连接到str1后
	//printf("%d\n",strlen(str1));//求串的长度，不包括\0的长度
	printf("%d\n",strcmp(str1,str2));//串比较，比较的是对应位置的ASCII值，str1与str2比较
	printf("-------------\n");
	puts(str1);
	puts(str2);
}*/

/*例：编写程序，从输入的若干字符串中找出最小的串进行输出*/
/*#define N 20
#define M 81
//赋值
int getstr(char p[][M])
{
	char t[M];
	int n=0;
	printf("Enter  string. a empty string to end\n");
	gets(t);
	while(strcmp(t,""))
	{
		strcpy(p[n],t);//赋值
		n++;
		gets(t);

	}
	return n;
}
//查询最小值
char * findmin(char (*a)[M],int n)
{
	char *q;
	int i;
	q=a[0];//假设a[0]是最小的
	for(i=0;i<n;i++)
		if(strcmp(a[i],q)<0)
			q=a[i];
	return q;
}
void main()
{
	char s[N][M],*sp;
	int n;//有效串的个数
	n=getstr(s);
	sp=findmin(s,n);
	puts(sp);
}
*/