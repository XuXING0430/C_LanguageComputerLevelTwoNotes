#include<stdio.h>
#include<stdlib.h>
/*第十五章：文件的操作
	1.文件指针：FILE *fp；
	打开与关闭：fopen("文件名"，"文件的使用方式")；
	fopen("c:\\it.dat","r");
	fclose(fp);
	r：读 [如果文件不存在，就会报错]
	rb：读取二进制文件
	w：写 [如果文件不存在，就会新建一个文件]
	wb：写二进制
	a：添加数据
	ab：
	r+：为读或者是写打开文本文件
	rb+：为读或者是写打开二进制文件
	w+：
	a+：


	2.数据的输入输出
	从文件读取数据到内存：getc(fgetc)
	ch=getc(fp):文件指针
	fgetc()fp:

	从内存输出数据到文件
	putc(fputc)
	putc(ch,fp):输出一个字符
	fputc(ch,fp)
	*/
/*void main()
{
	FILE *fp;//定义文件指针
	char ch;
	if((fp=fopen("d:\\itedu.lg4","w"))==NULL)//NULL
	{
		printf("Can't open this file!\n");
		exit(0);
	}
	//从键盘上输入的数据输出到文件 以@结束
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
	FILE *fp;//定义文件指针
	char ch;
	if((fp=fopen("d:\\itedu.lg4","r"))==NULL)//NULL
	{
		printf("Can't open this file!\n");
		exit(0);
	}
	//从键盘上输入的数据输出到文件 以@结束
	ch=getc(fp);//从fp所指的文件指针读取数据到内存

	while(ch!=EOF)//end of file  0-255
	{
		putchar(ch);
		ch=fgetc(fp);
	}


	fclose(fp);
}
*/

//3.判断文件结束函数 feof  1 0
/*编写程序，用于把一个文本我呢见【源文件】复制到另一个文件【目的文件】
原文件名为itedu.lg4，目标文件为fileb.dat*/
/*
void myfilecopy(FILE *fpin,FILE *fpout);
void main()
{
	FILE *fpin,*fpout;
	fpin=fopen("d:\\itedu.lg4","r");//打开数据源文件
	fpout=fopen("d:\\fileb.lg4","w");//打开目标文件
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
//4.fsanf()函数和fprintf()函数
/*fscanf(文件指针，格式控制符，输入项列表)；
  fprintf(文件指针，格式控制符，输出项列表)*/
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

/*5.fgets()函数和fputs()函数：
fgets(str,n,fp)
fputs(str,fp):'\0'并不输出，也不自动加换行符

6.fread()函数 和fwrite函数:二进制文件
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
	fseek(fp,sizeof(st),SEEK_SET);//从文件起始位置移动了sizeof（st）个位置
	fread(&s,sizeof(st),1,fp);
	puts(s.num);
	puts(s.name);
	fseek(fp,-2*sizeof(st),1);//从当前位置向文件起始位置移动sizeof（st）个字节
	fread(&s,sizeof(st),1,fp);
	puts(s.num);
	puts(s.name);
	fseek(fp,0L,SEEK_END);//吧文件位置指针移到文件末尾
	
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
/*7.文件定位i函数：
  文件指针： FILE
  文件位置指针：位置
	fseek(fp,offset,origin)：移动文件位置指针到指定的位置
例子：fseek(fp,-30L,SEEK_END);
	ftell(fp); 获得文件位置指针当前指针位置的函数
	rewind(fp); 反绕函数：使得文件位置回到起始位置
	
	标识符    数字    代表的起始点
	SEEK_SET  0      文件开始
	SEEK_END  2      文件末尾
	SEEK_CUR  1      文件当前位置*/