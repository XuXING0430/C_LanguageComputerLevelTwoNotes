#include <stdio.h>
//1.�ṹ��
/*struct date
{
	int year,month,day;//��Ա����
};
//ѧ��
 struct student
{
	char name[10];//����
	char sex; //�Ա�
	struct date birthday;//����
	double sc[4]; //���Գɼ�
} st;
typedef struct student st;//�û��Զ��� ����Ϊst
void showstudent(st *pstd)
{
	int i;
	printf("%s\n",pstd->name);//ָ�����->��Ա��
	printf("%c\n",(*pstd).sex);//(*ָ�����).��Ա��
	printf("%d-%d-%d\n",(*pstd).birthday.year,(*pstd).birthday.month,(*pstd).birthday.day);
	for(i=0;i<4;i++)
		printf("%8.2f",(*pstd).sc[i]);
	printf("\n");
}
void main()
{
	//int i;
	st std={"LI San",'M',1995,4,6,33.4,44.9,55.3,66.6},*pstd;
	pstd=&std;//���ṹ�����͵�ָ�������ֵ
	//���ýṹ���е�����
	//printf("%s\n",pstd->name);//ָ�����->��Ա��
	//printf("%c\n",std.sex);//�ṹ�������.��Ա��
	//printf("%c\n",(*pstd).sex);//(*ָ�����).��Ա��
	//printf("%d-%d-%d\n",std.birthday.year,std.birthday.month,std.birthday.day);
	//for(i=0;i<4;i++)
		//printf("%8.2f",std.sc[i]);
	showstudent(&std);
	printf("\n");

	
	
}*/

/*2.���ýṹ�������������

*/
//��̬����
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
	p=h;  //ָ������ĵ���λ��
	while(p)
	{
		printf("%d\n",p->data);
		p=p->next;
	}
	printf("\n");

}*/

//3.��̬����Ĵ�����
/*a����д����creat_list����������ͷ���ĵ�������
	�ڵ��������е�ֵ�ɼ������룬��-1��Ϊ���������־��
	����ͷ���ĵ�ַ�ɺ�������*/
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
	h=(ST *)malloc(sizeof(ST));//����ͷ���
	r=h;
	scanf("%c",&c);
	while(c!=-1)
	{
		s=(ST *)malloc(sizeof(ST));//�����µĽ��
		s->data=c;
		r->next=s;//�½ڵ����ӵ����ĩβ
		r=s;//ָ�������ĩβ
		scanf("%d",&c);
	}
	r->next='\0';//����Ľ�����־
	return h;//��������ͷ���
}

//b����д����print_list��˳�������������ĸ��ڵ��������е�ֵ
	
void print_list(ST *head)
{
	ST *p;
	p=head->next; //ָ��ͷ����ĵ�һ�����
	if(p=='\0') printf("Linklist is null");
	else
	{
		printf("head");
		do
		{
			printf("-->%d",p->data);
			p=p->next; //pָ������һ�����
		} while(p!='\0');
		printf("-->end");
	}
}

//c����д����insert_node����ֵΪx�Ľ��ǰ����ֵΪy
    //�Ľ�㣬��ֵΪx�Ľڵ㲻���ڣ������ĩβ
void insert_node(ST *head,int x,int y)
{
	ST *s,*p,*q;
	s=(ST *)malloc(sizeof(ST));
	s->data=y; //���µĽ���д���yֵ
	q=head;
	p=head->next;
	while((p!='\0')&&(p->data!=x))//�� �ǿ���δ�ҵ�ĩβ
	{
		q=p;
		p=p->next;
	}
	s->next=p;
	q->next=s;//���x���ڣ��Ͳ���x֮ǰ�������ڣ���嵽�����ĩβ
}
//d����д����delete_list,ɾ��������ֵΪx�Ľ�㣬
	//���ͷŶ�Ӧ�Ĵ洢�ռ�
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
	if(p=='\0') printf("������ֵΪ%d�Ľ��\n",x);
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
	head=creat_list(); //��������
	print_list(head); //�������
	printf("������Ҫ���ҵ�ֵ\n");
	scanf("%d",&x);
	printf("������Ҫ�����ֵ\n");
	scanf("%d",&y);
	insert_node(head,x,y);//����
	print_list(head);
	printf("������Ҫɾ���Ľ��\n");
	scanf("%d",&x);
	printf("��Ҫɾ���Ľ����%d\n",x);
	delete_list(head,x);
	print_list(head);
}
*/

/*4.�����壺��ͬռ��ĳ���ڴ��*/
/*union change
{
	short int i;
	char a[2]; //��ͬռ���ڴ�

} un,*pu;
void main()
{
	un.i=16961;
	pu=&un;
	printf("%d\n",pu->i);
	printf("%d,%c\n",un.a[0],un.a[0]);//�Ͱ�λ��65��ת��Ϊ������
	printf("%d,%c\n",un.a[1],un.a[1]);//�߰�λ��66
}*/