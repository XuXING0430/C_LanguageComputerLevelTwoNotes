#include<stdio.h>
#include<math.h>
/*�����£��ַ�������*/
/*2 4 8 3���Ϊ2483*/
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

/*���
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

/*��д����ͳ�������ַ��пո񣬻��У�tab�ĸ������ã���������*/
#include<ctype.h>
/*void main()
{
	int n=0;
	char ch;
	while((ch=getchar())!='!')
	{
		if(isspace(ch)) n++;	//�жϿո�ĺ���
	}
	printf("n=%d\n",n);
}*/

/*��һ������������ģ�������@����
	1.��ĸ��ת������ĸ���е���һ��ĸ,A-B
	2.�������ĸZ���򻻳�A
	3.���۴�Сд��ĸ�����Сд��ĸ
	4.�����ַ�һ��ԭ�����
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
			c=tolower(c);//�Ѵ�д��ĸ���Сд
			c=(c-'a'+1)%26+'a';

		}
		putchar(c);
	}
}
*/


/*void main()  //���ն˶����һ���ַ������е�Сд��ĸ���ɴ�д��ĸ����������
{
	char ch;
	while ((ch=getchar())!='\n')//����һ�����ݣ��Ի���δ����
	{
		if(ch>='a'&&ch<='z')
			ch=ch-32;
			putchar(ch);
	}
	printf("\n");
}
*/

/*void main()  //���26����д��ĸ�����ǵ�ASCII�룬ÿ�������������
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
	ch=getchar();//����һ���ַ� scanf("%c")
	putchar(ch);//���һ���ַ� printf("%c")
	putchar('\n');
}
*/
/*void main()
{
	//char ch1='\0';
	//printf("%d\n",sizeof("AB"));//  \0��Ϊ���Ľ������

	char ch1='A';
	char ch2='0';

	printf("%c\n",ch1+2); //�ַ�ֵ�����㣬����ASCII������㣬A+32=a
}
*/
/*void main()
{
	printf("\n");//ת���ַ�����Ϊ��������Щֵͨ���������벻��
	printf("\t");
	printf("aa");
	printf("\\");
	printf("\'");
	//int i;
	//for(i=0;i<=127;i++)//�ַ���ASCII���Ӧ��ϵ
		//printf("%c:%d\n",i,i);
}*/