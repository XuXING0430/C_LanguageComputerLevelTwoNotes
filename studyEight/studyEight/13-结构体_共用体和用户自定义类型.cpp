#include <stdio.h>
//1.结构体
/*struct date
{
	int year,month,day;//成员变量
};
//学生
 struct student
{
	char name[10];//姓名
	char sex; //性别
	struct date birthday;//生日
	double sc[4]; //考试成绩
} st;
typedef struct student st;//用户自定义 名称为st
void showstudent(st *pstd)
{
	int i;
	printf("%s\n",pstd->name);//指针变量->成员名
	printf("%c\n",(*pstd).sex);//(*指针变量).成员名
	printf("%d-%d-%d\n",(*pstd).birthday.year,(*pstd).birthday.month,(*pstd).birthday.day);
	for(i=0;i<4;i++)
		printf("%8.2f",(*pstd).sc[i]);
	printf("\n");
}
void main()
{
	//int i;
	st std={"LI San",'M',1995,4,6,33.4,44.9,55.3,66.6},*pstd;
	pstd=&std;//给结构体类型的指针变量赋值
	//引用结构体中的数据
	//printf("%s\n",pstd->name);//指针变量->成员名
	//printf("%c\n",std.sex);//结构体变量名.成员名
	//printf("%c\n",(*pstd).sex);//(*指针变量).成员名
	//printf("%d-%d-%d\n",std.birthday.year,std.birthday.month,std.birthday.day);
	//for(i=0;i<4;i++)
		//printf("%8.2f",std.sc[i]);
	showstudent(&std);
	printf("\n");

	
	
}*/

/*2.利用结构体变量构成链表：

*/
//静态链表
/*struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
void main()
{
	NODE a,b,c,*h,*p;
	a.data=10;
	b.data=20;
	c.data=30;
	h=&a;
	a.next=&b;
	b.next=&c;
	c.next='\0';
	p=h;  //指向链表的的首位置
	while(p)
	{
		printf("%d\n",p->data);
		p=p->next;
	}
	printf("\n");

}*/

//3.动态链表的创建：
/*a。编写函数creat_list，建立带有头结点的单向链表，
	节点数据域中的值由键盘输入，以-1做为输入结束标志，
	链表头结点的地址由函数返回*/
#include<stdlib.h>
/*typedef struct slist
{
	int data;
	struct slist *next;
} ST;
ST *creat_list()
{
	int c;
	ST *h,*s,*r;
	h=(ST *)malloc(sizeof(ST));//生成头结点
	r=h;
	scanf("%c",&c);
	while(c!=-1)
	{
		s=(ST *)malloc(sizeof(ST));//生成新的结点
		s->data=c;
		r->next=s;//新节点连接到表的末尾
		r=s;//指向链表的末尾
		scanf("%d",&c);
	}
	r->next='\0';//链表的结束标志
	return h;//返回链表头结点
}

//b。编写函数print_list，顺序输出单向链表的各节点数据域中的值
	
void print_list(ST *head)
{
	ST *p;
	p=head->next; //指向头结点后的第一个结点
	if(p=='\0') printf("Linklist is null");
	else
	{
		printf("head");
		do
		{
			printf("-->%d",p->data);
			p=p->next; //p指向了下一个结点
		} while(p!='\0');
		printf("-->end");
	}
}

//c。编写函数insert_node，在值为x的结点前插入值为y
    //的结点，若值为x的节点不存在，则插在末尾
void insert_node(ST *head,int x,int y)
{
	ST *s,*p,*q;
	s=(ST *)malloc(sizeof(ST));
	s->data=y; //在新的结点中存入y值
	q=head;
	p=head->next;
	while((p!='\0')&&(p->data!=x))//表 非空且未找到末尾
	{
		q=p;
		p=p->next;
	}
	s->next=p;
	q->next=s;//如果x存在，就插入x之前，不存在，则插到链表的末尾
}
//d。编写函数delete_list,删除链表中值为x的结点，
	//并释放对应的存储空间
void delete_list(ST *head,int x)
{
	ST *p,*q;
	q=head;
	p=head->next;
	while((p!='\0')&&(p->data!=x))//
	{
		q=p;
		p=p->next;
	}
	if(p=='\0') printf("不存在值为%d的结点\n",x);
	else
	{
		q->next=p->next;
		free(p);
	}
}
void main()
{
	int x,y;
	ST *head;
	head=creat_list(); //创建链表
	print_list(head); //输出链表
	printf("请输入要查找的值\n");
	scanf("%d",&x);
	printf("请输入要插入的值\n");
	scanf("%d",&y);
	insert_node(head,x,y);//插入
	print_list(head);
	printf("请输入要删除的结点\n");
	scanf("%d",&x);
	printf("你要删除的结点是%d\n",x);
	delete_list(head,x);
	print_list(head);
}
*/

/*4.共用体：共同占用某个内存的*/
/*union change
{
	short int i;
	char a[2]; //共同占用内存

} un,*pu;
void main()
{
	un.i=16961;
	pu=&un;
	printf("%d\n",pu->i);
	printf("%d,%c\n",un.a[0],un.a[0]);//低八位，65，转化为二进制
	printf("%d,%c\n",un.a[1],un.a[1]);//高八位，66
}*/