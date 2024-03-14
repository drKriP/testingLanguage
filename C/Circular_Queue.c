#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
#include<ctype.h>
#define MAX 5
void insert(int item, int array[], int *rear, int *counter)
{
	if(*counter == MAX)
	{
		printf("Queue Full\n");
		return;
	}
	*rear = (*rear + 1) % MAX;
	array[*rear] = item;
	*counter += 1;
}
void delete(int array[], int *front, int *counter)
{
	if(*counter == 0)
	{
		printf("Queue Empty\n");
		return;
	}
	else
	printf("Item deleted is %d\n", array[*front]);
	*front = (*front + 1) % MAX;
	*counter -= 1;
}
void display(int array[], int front, int counter)
{
	int i;
	if(counter == 0)
	{
		printf("Queue Empty\n");
		return;
	}
	printf("\nFront = %d\n",array[front]);
	printf("The Elements of the queue is : ");
	for(i=1;i<=counter;i++)
	{
		printf(" %d ", array[front]);
		front = (front + 1) % MAX;
	}
	printf("\n");
}
void main()
{
	int array[10],front=0,rear=-1,counter=0,choice,item;
	for(;;)
	{
		printf("Circular Queue\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
                {
                        case 1: printf("Enter Item : ");
                                scanf("%d", &item);
                                insert(item,array,&rear,&counter);
                                break;
                                
                        case 2: delete(array,&front,&counter);
                                break;
                                        
                        case 3: display(array,front,counter);
                                break;
                                
                        case 4: exit(0);
                        
                        default: printf("Wrong Choice");
                }
	}
}
