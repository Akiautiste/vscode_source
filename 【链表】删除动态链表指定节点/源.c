#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

#if 0
#define LEN sizeof(struct node)
void print(struct student* head);
struct node
{
	char data;
	struct node* next;

};
void main()
{
	struct node* p1, * p2, * head;
	char t;
	head = p1 = p2 = (struct node*)malloc(LEN);
	char i = 'A';
	do
	{
		p1->data = i;
		i += 1;
		printf("%c\n", p1->data);
		p1 = (struct node*)malloc(LEN);
		p2->next = p1;
		p2 = p1;
	} while (i != 'F');
	p2->next = NULL;

	printf("Input a node to delete:\n");
	scanf_s("%c",&t);
	p1 = p2 = head;
	while (p1->next)
	{
		
		if (t == p1->data)
		{
			p2->next = p1->next;
			free(p1);
		}
		p2 = p1;
		p1 = p1->next;
	}
	print(head);

}
void print(struct node* head)
{
	struct node* p;
	p = head;
	if (head)
	{
		do
		{
			printf("%f\n",p->data);
			p = p->next;
		} while (p);
	}
}
#endif

#define LEN sizeof(struct student) //student结构的大小
struct student* creat(); //创建链表
struct student* del(struct student* head, int num); //del用户删除节点，num是要删除的节点num
void print(struct student* head);//打印链表
struct student
{
	int num;
	float score;
	struct student* next;
};
int n;//全局变量，用来记录存放了多少数据
void main()
{
	struct student* stu, * p;
	int n;
	stu = creat();
	p = stu;
	print(p);
	printf("Please enter the num of delete:");
	scanf_s("%d", &n);
	print(del(p, n));
	printf("\n\n");
	system("pause");
}
struct student *creat()
{
	struct student* head;
	struct student* p1, * p2;

	p1 = p2 = (struct student*)malloc(LEN);
	printf("Please enter the num;");
	scanf_s("%d", &p1->num);
	printf("Please enter the score:");
	scanf_s("%f", &p1->score);

	head = NULL;
	return head;
	
}
void print(struct student* head)
{
	struct student *p;
	printf("\nThere are %d record!\n\n", n);
	p = head;
	if (head)
	{
		do
		{
			printf("学号为%f的成绩是：%f\n", p->score);
		} while (p);
	}
}

struct student* del(struct student* head, int num)
{
	struct student* p1, * p2;
	if (NULL == head) //这是一个空链表
	{
		printf("\nThis is null!\n");
		goto end;
	}
	p1 = head;
	while (p1->num!=num&&p1->next!=NULL)
	{
		p2 = p1;
		p1 = p1->next;
	}
	if (num == p1->num)
	{
		if (p1 == head)
		{
			head = p1->next;
		}
		else
		{
			p2->next = p1->next;
		}
		printf("\nDelete No:%d succeed!\n", num);
		n = n - 1;
	}
	else
	{
		printf("%d not been foud!\n", num);
	}
end:
	return head;
}