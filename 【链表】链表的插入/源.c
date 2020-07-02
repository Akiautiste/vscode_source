#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#define LEN sizeof(struct student)

struct student* creat();
struct student* del(struct student* head, int num);
struct student* insert(struct student* head, struct student* stu_2); //第一个需要被插入的节点，第二个参数是代插入的结构地址

void print(struct student* head);
int n;
struct student
{
	int num;
	float score;
	struct student* next;
};
void main()
{
	struct student* stu, * p, stu_2;
	int n;
	stu = creat();
	p = stu;
	print(p);

	printf("\nPlease input the num to delete:");
	scanf_s("%d", &n);
	print(del(p, n));

	printf_s("\nPlease input the num to insert:");
	scanf_s("%d", &stu_2.num);
	printf("Please input the score:");
	scanf_s("%f", &stu_2.score);

	p = insert(stu, &stu_2);
	print(p);
}
struct student* creat()   //创建链表
{
	struct student* head;
	struct student* p1, * p2;
	p1 = p2 = (struct student*)malloc(LEN);

	printf("Please enter the num:");
	scanf_s("%d", &p1->num);
	printf("Please enter the score:");
	scanf_s("%f", &p1->score);

	head = NULL;
	n = 0;
	while (p1->num)
	{
		n++;
		if (1 == n)
		{
			head = p1;
		}
		else
		{
			p2->next = p1;
		}
		p2 = p1;
		p1 = (struct student*)malloc(LEN);
		printf("Please enter the num:");
		scanf_s("%d", &p1->num);
		printf("Please enter the score:");
		scanf_s("%f", &p1->score);
	}
	p2->next = NULL;
	return head;

}
void print(struct student* head)
{
	struct student* p;
	printf("\nThere are %d records!\n\n", n);
	p = head;
	if (head)
	{
		do
		{
			printf("学号为%d的成绩为：%f\n", p->num, p->score);
			p = p->next;
		} while (p);
	}
}
struct student* del(struct student* head, int num)
{
	struct student* p1, * p2;
	if (NULL == head)
	{
		printf("\nThis list is null!\n");
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
		if(p1==head)
		{
			head = p1->next;
		}
		else
		{
			p2->next = p1->next;
		}
		printf("Delete No:%d succeed!\n", num);
		n = n - 1;
	}
	else
	{
		printf("%d not been foud!\n", num);
	}
end:
	return head;

}

struct student* insert(struct student* head, struct student* stu_2)
{
	struct student* p0, * p1, * p2;
	p1 = head;
	p0 = stu_2;
	if (NULL == head)
	{
		head = p0;
		p0->next = NULL;
	}
	else
	{
		while ((p0->num>p1->num)&&(p1->next!=NULL))
		{
			p2 = p1;
			p1 = p1->next;
		}
		if (p0->num <= p1->num)
		{
			if (head == p1)
			{
				head = p0;

			}
			else
			{
				p2->next = p0;
			}
			p0->next = p1;
		}
		else
		{
			p1->next = p0;
			p0->next = NULL;
		}
	}
	n = n + 1;
	return head;

}