#include<stdio.h>
#include<math.h>
/*第五章：字符型数据*/
/*2 4 8 3输出为2483*/
/*void main()
{
	char ch;
	int d,n=0;
	ch=getchar();
	while(ch!='\n')
	{
		if(ch>='0'&&ch<='9')
		{
			d=ch-'0';
			n=n*10+d;
		}
		ch=getchar();
	}
	printf("%d\n",n);
}*/

/*输出
       A
	  BBB
	 CCCCC
	DDDDDDD
   EEEEEEEEE
*/
/*#define l 15
void main()
{
	char ch='A';
	int line,i,space;
	for(line=1;line<=l;line++)
	{
		ch='A'+line-1;
		for(space=l;space>=line;space--) putchar(' ');
			for(i=0;i<2*line-1;i++)
			putchar(ch);
			printf("\n");	
	}
}
*/

/*编写程序，统计输入字符中空格，换行，tab的个数，用！结束输入*/
#include<ctype.h>
/*void main()
{
	int n=0;
	char ch;
	while((ch=getchar())!='!')
	{
		if(isspace(ch)) n++;	//判断空格的函数
	}
	printf("n=%d\n",n);
}*/

/*把一串密码译成正文，密码以@结束
	1.字母：转换成字母序列的下一字母,A-B
	2.如果是字母Z，则换成A
	3.无论大小写字母都译成小写字母
	4.其他字符一律原样输出
*/
/*void main()
{
	int n=0;
	char c;
	while((c=getchar())!='@')
	{
		//if(c>='A'&&c<='Z'||c>='a'&&c<='z')
		if(isalpha(c))
		{
			c=tolower(c);//把大写字母变成小写
			c=(c-'a'+1)%26+'a';

		}
		putchar(c);
	}
}
*/


/*void main()  //把终端读入的一行字符中所有的小写字母换成大写字母，其他不变
{
	char ch;
	while ((ch=getchar())!='\n')//输入一行数据，以换行未结束
	{
		if(ch>='a'&&ch<='z')
			ch=ch-32;
			putchar(ch);
	}
	printf("\n");
}
*/

/*void main()  //输出26个大写字母和他们的ASCII码，每行输出两组数据
{
	char ch='A';
	int i=0;
	for(;i<26;i++)
	{
		ch='A'+i;
		printf("%c,ASCII=%d ",ch,ch);
		if((i+1)%2==0) printf("\n");
	}
}*/

/*void main()
{
	char ch;
	ch=getchar();//读入一个字符 scanf("%c")
	putchar(ch);//输出一个字符 printf("%c")
	putchar('\n');
}
*/
/*void main()
{
	//char ch1='\0';
	//printf("%d\n",sizeof("AB"));//  \0作为串的结束标记

	char ch1='A';
	char ch2='0';

	printf("%c\n",ch1+2); //字符值的运算，就是ASCII码的运算，A+32=a
}
*/
/*void main()
{
	printf("\n");//转义字符。因为键盘上有些值通过键盘输入不了
	printf("\t");
	printf("aa");
	printf("\\");
	printf("\'");
	//int i;
	//for(i=0;i<=127;i++)//字符的ASCII码对应关系
		//printf("%c:%d\n",i,i);
}*/