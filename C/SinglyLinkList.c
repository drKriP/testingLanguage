#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#include<ctype.h>
struct node
{
	int info;
	struct node *link;
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
NODE insertFront(int item, NODE first)
{
	NODE temp;
	temp = getnode();
	temp->info = item;
	temp->link = first;
	return temp;
}
NODE insertRear(int item, NODE first)
{
	NODE temp,cur;
	temp = getnode();
	temp->info = item;
	temp->link = NULL;
	if(first == NULL)
	{return temp;
	}
	cur = first;
	while(cur->link != NULL)
	{cur = cur->link;
	}
	cur->link = temp;
	return first;
}
NODE deleteRear(NODE first)
{
	NODE cur,prev;
	if(first == NULL)
	{
		printf("List is Empty\n");
		return first;
	}
	if(first->link == NULL)
	{
		printf("The item deleted is %d\n", first->info);
		free(first);
		return NULL;
	}
	prev = NULL;
	cur = first->link;
	while(cur->link != NULL)
	{
		prev = cur;
		cur = cur->link;
	}
	printf("The item deleted is %d\n",cur->info);
	printf("BEEP 1\t");
	free(cur);
	printf("BEEP 2\t");
	prev->link = NULL;
	printf("BEEP 3\t");
	return first;
}
NODE deleteFront(NODE first)
{
	NODE temp;
	if(first == NULL)
	{
		printf("List is empty.\n");
		return first;
	}
	temp = first;
	temp = temp->link;
	printf("Item deleted = %d.\n",first->info);
	free(first);
	return temp;
}
void display(NODE first)
{
	NODE temp;
	if(first == NULL)
	{
		printf("List is empty.\n");
		return;
	}
	printf("The content of the linked list are : \n");
	temp = first;
	while(temp != NULL)
	{
		printf("%d, ",temp->info);
		temp = temp->link;
	}
}
void main()
{
	NODE first = NULL;
	int choice,item;
	for(;;)
	{
		printf("\nSingly Linked List\n1. Insert Front\n2. Insert Rear\n3. Delete Rear\n4. Delete Front\n5. Display\n6. Exit.\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("Enter the item you want to insert : ");
					scanf("%d",&item);
					first = insertFront(item, first);
					break;
			case 2: printf("Enter the item you want to insert : ");
					scanf("%d",&item);
					first = insertRear(item, first);
					break;
			case 3: first = deleteRear(first);
					break;
			case 4: first = deleteFront(first);
					break;
			case 5: display(first);
					break;
			case 6: exit(0);
			default: printf("Wrong Choice\n");
		}
	}
}


























