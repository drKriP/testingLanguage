#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
#include<ctype.h>
#define MAX 5
int rear,front,array[10],item;
void insert()
{
	if(rear == MAX-1)
	{
		printf("Queue Full\n");
		return;
	}
	rear = rear + 1;
	array[rear] = item;
}
void delete()
{
	if(front > rear)
	{
		printf("Queue Empty\n");
		return;
	}
	else
	front = front+1;
	printf("Item deleted is %d\n", array[front++]);
	if(front > rear)
	{
		front = 0;
		rear = -1;
	}
}
void display()
{
	int i;
	if(front > rear)
	{
		printf("Queue Empty\n");
		return;
	}
	printf("\nFront = %d\n",array[front]);
	printf("The Elements of the queue is : ");
	for(i=0;i<=rear;i++)
	{
		printf(" %d ", array[i]);
	}
	printf("\n");
}
void main()
{
	int choice;
	front=0,rear=-1;
	for(;;)
	{
		printf("Linear Queue\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
                {
                        case 1: printf("Enter Item : ");
                                scanf("%d", &item);
                                insert();
                                break;
                                
                        case 2: delete();
                                break;
                                        
                        case 3: display();
                                break;
                                
                        case 4: exit(0);
                        
                        default: printf("Wrong Choice");
                }
	}
}
