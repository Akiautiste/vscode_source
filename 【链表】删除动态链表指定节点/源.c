#include <stdio.h>
#include <malloc.h>
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
#endif