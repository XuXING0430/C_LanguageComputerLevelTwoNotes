#include<stdio.h>
#include<stdlib.h>
/*��ʮ���£��ļ��Ĳ���
	1.�ļ�ָ�룺FILE *fp��
	����رգ�fopen("�ļ���"��"�ļ���ʹ�÷�ʽ")��
	fopen("c:\\it.dat","r");
	fclose(fp);
	r���� [����ļ������ڣ��ͻᱨ��]
	rb����ȡ�������ļ�
	w��д [����ļ������ڣ��ͻ��½�һ���ļ�]
	wb��д������
	a���������
	ab��
	r+��Ϊ��������д���ı��ļ�
	rb+��Ϊ��������д�򿪶������ļ�
	w+��
	a+��


	2.���ݵ��������
	���ļ���ȡ���ݵ��ڴ棺getc(fgetc)
	ch=getc(fp):�ļ�ָ��
	fgetc()fp:

	���ڴ�������ݵ��ļ�
	putc(fputc)
	putc(ch,fp):���һ���ַ�
	fputc(ch,fp)
	*/
/*void main()
{
	FILE *fp;//�����ļ�ָ��
	char ch;
	if((fp=fopen("d:\\itedu.lg4","w"))==NULL)//NULL
	{
		printf("Can't open this file!\n");
		exit(0);
	}
	//�Ӽ��������������������ļ� ��@����
	ch=getchar();
	while(ch!='@')
	{
		fputc(ch,fp);
		ch=getchar();
	}


	fclose(fp);
}
*/
/*void main()
{
	FILE *fp;//�����ļ�ָ��
	char ch;
	if((fp=fopen("d:\\itedu.lg4","r"))==NULL)//NULL
	{
		printf("Can't open this file!\n");
		exit(0);
	}
	//�Ӽ��������������������ļ� ��@����
	ch=getc(fp);//��fp��ָ���ļ�ָ���ȡ���ݵ��ڴ�

	while(ch!=EOF)//end of file  0-255
	{
		putchar(ch);
		ch=fgetc(fp);
	}


	fclose(fp);
}
*/

//3.�ж��ļ��������� feof  1 0
/*��д�������ڰ�һ���ı����ؼ���Դ�ļ������Ƶ���һ���ļ���Ŀ���ļ���
ԭ�ļ���Ϊitedu.lg4��Ŀ���ļ�Ϊfileb.dat*/
/*
void myfilecopy(FILE *fpin,FILE *fpout);
void main()
{
	FILE *fpin,*fpout;
	fpin=fopen("d:\\itedu.lg4","r");//������Դ�ļ�
	fpout=fopen("d:\\fileb.lg4","w");//��Ŀ���ļ�
	myfilecopy(fpin,fpout);
	fclose(fpin);fclose(fpout);
}

void myfilecopy(FILE *fpin,FILE *fpout)
{
	char ch;
	ch=getc(fpin);
	while(!feof(fpin))
	{
		fputc(ch,fpout);
		ch=getc(fpin);
	}
}
*/
//4.fsanf()������fprintf()����
/*fscanf(�ļ�ָ�룬��ʽ���Ʒ����������б�)��
  fprintf(�ļ�ָ�룬��ʽ���Ʒ���������б�)*/
/*void main()
{
	FILE *fp;
	int x,y;
	fp=fopen("d:\\test.txt","r");
	//fprintf(fp,"%d %d",x,y);
	fscanf(fp,"%d %d",&x,&y);
	printf("x=%d,y=%d\n",x,y);
	fclose(fp);
}
*/

/*5.fgets()������fputs()������
fgets(str,n,fp)
fputs(str,fp):'\0'���������Ҳ���Զ��ӻ��з�

6.fread()���� ��fwrite����:�������ļ�
fread(buffer,size,count,fp);
fwrite(buffer,size,count,fp);
*/
/*void main()
{
	FILE *fp;
	char a[2][10]={"Hello","world"};
	fp=fopen("d:\\teststring.txt","r");
	fgets(a[0],10,fp);
	fgets(a[1],10,fp);
	puts(a[0]);
	puts(a[1]);
	fclose(fp);
}
*/
struct student
{
	char num[8];
	char name[10];
};
typedef struct student st;
void main()
{
	st s;
	int t,n;
	FILE *fp;
	fp=fopen("d:\\teststring.txt","rb");
	fseek(fp,sizeof(st),SEEK_SET);//���ļ���ʼλ���ƶ���sizeof��st����λ��
	fread(&s,sizeof(st),1,fp);
	puts(s.num);
	puts(s.name);
	fseek(fp,-2*sizeof(st),1);//�ӵ�ǰλ�����ļ���ʼλ���ƶ�sizeof��st�����ֽ�
	fread(&s,sizeof(st),1,fp);
	puts(s.num);
	puts(s.name);
	fseek(fp,0L,SEEK_END);//���ļ�λ��ָ���Ƶ��ļ�ĩβ
	
	t=ftell(fp);
	n=t/sizeof(st);
	printf("t=%d\n",t);
	printf("n=%d\n",n);

	rewind(fp);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
	t=ftell(fp);
	n=t/sizeof(st);
	printf("t=%d\n",t);
	fclose(fp);
}
/*
void main()
{
	st s[3];
	FILE *fp;
	fp=fopen("d:\\teststring.txt","rb");
	int i;
	for(i=0;i<3;i++)
		fread(&s[i],sizeof(st),1,fp);
	
	for(i=1;i<3;i++)
	{
		puts(s[i].num);
		puts(s[i].name);
	}
	fclose(fp);
}*/
/*void main()
{
	st s[3]={"1001","Wang","1002","Li","1003","Xu"};
	FILE *fp;
	fp=fopen("d:\\teststring.txt","wb");
	int i;
	for(i=0;i<3;i++)
		fwrite(&s[i],sizeof(st),1,fp);
	fclose(fp);

}*/
/*7.�ļ���λi������
  �ļ�ָ�룺 FILE
  �ļ�λ��ָ�룺λ��
	fseek(fp,offset,origin)���ƶ��ļ�λ��ָ�뵽ָ����λ��
���ӣ�fseek(fp,-30L,SEEK_END);
	ftell(fp); ����ļ�λ��ָ�뵱ǰָ��λ�õĺ���
	rewind(fp); ���ƺ�����ʹ���ļ�λ�ûص���ʼλ��
	
	��ʶ��    ����    �������ʼ��
	SEEK_SET  0      �ļ���ʼ
	SEEK_END  2      �ļ�ĩβ
	SEEK_CUR  1      �ļ���ǰλ��*/