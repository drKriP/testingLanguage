#include<stdio.h>
#define MAX 10
int stack[10],top=-1,item,i=1;
int isFull()
{
	if(top+1==MAX)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void push()
{
	if(isFull())
	{
		printf("Stack is full.\n");
	} 
	else
	{
		top++;
		printf("Enter Item %d = ",top+1);
		scanf("%d",&item);
		stack[top]=item;
	}
}
int isEmpty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}
void pop()
{
	if(isEmpty())
	{
		printf("Stack is empty.\n");
	}
	else
	{
		printf("Item Poped = %d\n",stack[top]);
		item=stack[top];
		top--;
	}
}

void peek()
{
	printf("Peek=%d",stack[top]);
}
void findAll() {
	for(int i = 0; i<=top; i++) {
		printf("Peek %d = %d \n",i, stack[i]);
	}
}
int main()
{
	int ch;
    int loop=1;
	do
	{
		printf("\nStack Operation");
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Print all\n5. Exit\nEnter your choice :");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1: push();
                	break;
            case 2:	pop();
                	break;
            case 3:	peek();
                	break;
			case 4: findAll();
					break;
            case 5:	printf("Exiting");
                	loop=0;
                	break;
            default:printf("Invalid choice");
        }
	}while(loop);
	return 0;
}

