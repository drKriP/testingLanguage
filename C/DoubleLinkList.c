#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#include<ctype.h>
struct node
{
	int info;
	struct node *llink;
	struct node *rlink;
};
typedef struct node *NODE;
NODE getnode()
{
	NODE x;
	x = (NODE)malloc(sizeof(struct node));
	if(x == NULL)
	{printf("Out of Memory.\n");
	 exit(0);
	}
	return x;
}
NODE insertFront(int item, NODE head)
{
	NODE temp,cur;
	temp = getnode();
	temp->info = item;
	cur = head->rlink;
	head->rlink = temp;
	temp->llink = head;
	temp->rlink = cur;
	cur->rlink = temp;
	return head;
}
NODE insertRear(int item, NODE head)
{
	NODE temp,cur;
	temp = getnode();
	temp->info = item;
	cur = head->llink;
	head->llink = temp;
	temp->rlink = head;
	temp->llink = cur;
	cur->rlink = temp;
	return head;
}
NODE deleteRear(NODE head)
{
	NODE cur, prev;
	if(head->llink == head)
	{
		printf("List is Empty.\n");
		return head;
	}
	cur = head->llink;
	prev = cur->llink;
	head->llink = prev;
	prev->rlink = head;
	printf("The node to be deleted is %d.\n",cur->info);
	free(cur);
	return head;
}
NODE deleteFront(NODE head)
{
	NODE cur,next;
	if(head->rlink == head)
	{
		printf("List is empty.\n");
		return head;
	}
	cur = head->rlink;
	next = cur->rlink;
	head->rlink = next;
	next->llink = head;
	printf("The node to be deleted is %d.\n",cur->info);
	free(cur);
	return(head);
}
void display(NODE head)
{
	NODE temp;
	if(head->rlink == head)
	{
		printf("List is empty.\n");
		return;
	}
	printf("The content of the linked list are : \n");
	temp = head->rlink;
	while(temp != head)
	{
		printf("%d, ",temp->info);
		temp = temp->rlink;
	}
	printf("\n");
}
void main()
{
	NODE head;
	int choice,item;
	head = getnode();
	head->rlink = head;
	head->llink = head;
	for(;;)
	{
		printf("\nDoubly Linked List\n1. Insert Front\n2. Insert Rear\n3. Delete Rear\n4. Delete Front\n5. Display\n6. Exit.\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("Enter the item you want to insert : ");
					scanf("%d",&item);
					head = insertFront(item, head);
					break;
			case 2: printf("Enter the item you want to insert : ");
					scanf("%d",&item);
					head = insertRear(item, head);
					break;
			case 3: head = deleteRear(head);
					break;
			case 4: head = deleteFront(head);
					break;
			case 5: display(head);
					break;
			case 6: exit(0);
			default: printf("Wrong Choice\n");
		}
	}
}
