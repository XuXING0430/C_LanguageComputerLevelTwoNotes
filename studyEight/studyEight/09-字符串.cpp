#include<stdio.h>
//�ھ��� �ַ���
/*
	�ַ���'',' ','A','B','\n'
	�ַ�����""," ","AB"
	      \0 �Զ�����(��Ϊ���Ľ�����ǣ�ռ�ݴ洢�ռ䣬�������봮�ĳ���)
*/
//1.��һά�������洢�ַ�����char s[10]="";(ֱ�Ӹ�ֵ)     

/*void main()
{
	char s[10]="Hello",*sp;
	char a[]="Hello";
	char c[6]="Hello";//6������Ϊĩβ����һ�� \0
	sp="Hello";
	//s="Hello";
}
*/
/*2���ַ��������������
	getchar()
	putchar();
	scanf("%c");
	printf("%c");

	scanf("%s");
	printf("%s");

	gets():���봮
	puts():�����
*/
/*void main()
{
	char str[10],*sp;
	sp=str; //Ҫ��ָ��sp��ֵ
	printf("Enter:\n");
	gets(&str[1]); //�������ݣ����Զ��� �ո� 
	puts(&str[1]); //Ҫ������ǣ���ַ
	//scanf("%s",sp); //scanf�������벻��ֱ������ո�
	//printf("%s\n",sp);
}
*/

/*3.�ַ�������
	
*/

/*void main()
{
	//char ca[][5]={"A","BB","CCC"};
	char *pa[3]={"A","BB","CCC"};
	int i;
	for(i=0;i<3;i++)
		puts(pa[i]);
}*/

//4.�ַ���������
#include<string.h>
//strcpy �ַ������ƣ�
/*void main()
{
	char str1[10]="BA",str2[10]="BB";
	
	puts(str1);
	puts(str2);
	//strcpy(str1,str2); //��str2��������str1��
	//strcat(str1,str2); //��str2�����ӵ�str1��
	//printf("%d\n",strlen(str1));//�󴮵ĳ��ȣ�������\0�ĳ���
	printf("%d\n",strcmp(str1,str2));//���Ƚϣ��Ƚϵ��Ƕ�Ӧλ�õ�ASCIIֵ��str1��str2�Ƚ�
	printf("-------------\n");
	puts(str1);
	puts(str2);
}*/

/*������д���򣬴�����������ַ������ҳ���С�Ĵ��������*/
/*#define N 20
#define M 81
//��ֵ
int getstr(char p[][M])
{
	char t[M];
	int n=0;
	printf("Enter  string. a empty string to end\n");
	gets(t);
	while(strcmp(t,""))
	{
		strcpy(p[n],t);//��ֵ
		n++;
		gets(t);

	}
	return n;
}
//��ѯ��Сֵ
char * findmin(char (*a)[M],int n)
{
	char *q;
	int i;
	q=a[0];//����a[0]����С��
	for(i=0;i<n;i++)
		if(strcmp(a[i],q)<0)
			q=a[i];
	return q;
}
void main()
{
	char s[N][M],*sp;
	int n;//��Ч���ĸ���
	n=getstr(s);
	sp=findmin(s,n);
	puts(sp);
}
*/